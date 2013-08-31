package org.oss.pdfreporter.repo;

import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;

import org.oss.pdfreporter.engine.JRException;
import org.oss.pdfreporter.engine.JasperCompileManager;
import org.oss.pdfreporter.engine.JasperReport;
import org.oss.pdfreporter.engine.design.JasperDesign;
import org.oss.pdfreporter.engine.xml.JRXmlLoader;


public class SubreportUtil {
	
	public static JasperReport loadSubreport(String location) throws JRException {
		InputStream isReport = null;
		try {
			isReport = DigireportFileResourceLoader.getInputStream(location.replace(".jasper", ".jrxml"));
			JasperDesign design = JRXmlLoader.load(isReport);
			return JasperCompileManager.compileReport(design);
		} finally {
			close(isReport);
		}
	}
	

	private static void close(Closeable stream) throws JRException {
		if (stream!=null) {
			try {
				stream.close();
			} catch (IOException e) {
				throw new JRException(e);
			}
		}
	}
	
}