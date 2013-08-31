package org.oss.pdfreporter.engine.fonts;

import java.util.logging.Logger;

import org.oss.pdfreporter.font.IFont;
import org.oss.pdfreporter.font.IFontManager;
import org.oss.pdfreporter.font.IFont.FontStyle;
import org.oss.pdfreporter.net.IURL;
import org.oss.pdfreporter.registry.ApiRegistry;
import org.oss.pdfreporter.repo.DigireportFileResourceLoader;


public class LazyFontFace implements FontFace {
	private final static Logger logger = Logger.getLogger(LazyFontFace.class.getName());
	private final FontFamily fontFamily;
	private final FontStyle style;
	private final IURL url;
	private IFont font = null;

	LazyFontFace(FontFamily fontFamily, FontStyle style, IURL url) {
		super();
		this.fontFamily = fontFamily;
		this.style = style;
		this.url = url;
	}
	
	public static FontFace getInstance(FontFamily fontFamily, FontStyle style, String file) {
		// Resolve file immediately to fail fast.
		IURL url = DigireportFileResourceLoader.getURL(file);
		if (url==null) {
			throw new RuntimeException("Font file: " + file + " not found.");
		}
		logger.finest("Add font resource: " + fontFamily.getName() + ", Style: " +  style + ", Resource: " + file);
		return new LazyFontFace(fontFamily,style,url);
	}

	@Override
	public String getName() {
		return fontFamily.getName();
	}

	@Override
	public String getFile() {
		return url.getPath();
	}

	@Override
	public IFont getFont() {
		if (font==null) {
			loadFont();
		}
		return font;
	}

	private void loadFont() {
		IFontManager fontManager = ApiRegistry.getFontFactory().getFontManager();
		this.font = fontManager.loadFont(url.getPath(), fontFamily.getPdfEncoding(), fontFamily.isPdfEmbedded(), fontFamily.getName(), style);
	}

}