/*
 * JasperReports - Free Java Reporting Library.
 * Copyright (C) 2001 - 2011 Jaspersoft Corporation. All rights reserved.
 * http://www.jaspersoft.com
 *
 * Unless you have purchased a commercial license agreement from Jaspersoft,
 * the following license terms apply:
 *
 * This program is part of JasperReports.
 *
 * JasperReports is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * JasperReports is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with JasperReports. If not, see <http://www.gnu.org/licenses/>.
 */
package org.oss.pdfreporter.engine.util;

import org.oss.pdfreporter.crosstabs.JRCrosstab;
import org.oss.pdfreporter.engine.JRBreak;
import org.oss.pdfreporter.engine.JRComponentElement;
import org.oss.pdfreporter.engine.JRElementGroup;
import org.oss.pdfreporter.engine.JREllipse;
import org.oss.pdfreporter.engine.JRFrame;
import org.oss.pdfreporter.engine.JRGenericElement;
import org.oss.pdfreporter.engine.JRImage;
import org.oss.pdfreporter.engine.JRLine;
import org.oss.pdfreporter.engine.JRRectangle;
import org.oss.pdfreporter.engine.JRStaticText;
import org.oss.pdfreporter.engine.JRSubreport;
import org.oss.pdfreporter.engine.JRTextField;
import org.oss.pdfreporter.engine.JRVisitor;


/**
 * Abstract delegation visitor.
 * 
 * @author Lucian Chirita (lucianc@users.sourceforge.net)
 * @version $Id: JRDelegationVisitor.java 4595 2011-09-08 15:55:10Z teodord $
 */
public abstract class JRDelegationVisitor implements JRVisitor
{

	private final JRVisitor visitor;
	
	/**
	 * Creates a delegation visitor.
	 * 
	 * @param visitor the visitor to which calls would be delegated to
	 */
	public JRDelegationVisitor(JRVisitor visitor)
	{
		this.visitor = visitor;
	}
	
	/**
	 * Returns the visitor to which calls are delegated to.
	 * 
	 * @return the visitor to which calls are delegated to
	 */
	public JRVisitor getVisitor()
	{
		return visitor;
	}
	
	public void visitBreak(JRBreak breakElement)
	{
		visitor.visitBreak(breakElement);
	}

	

	public void visitCrosstab(JRCrosstab crosstab)
	{
		visitor.visitCrosstab(crosstab);
	}

	public void visitElementGroup(JRElementGroup elementGroup)
	{
		visitor.visitElementGroup(elementGroup);
	}

	public void visitEllipse(JREllipse ellipse)
	{
		visitor.visitEllipse(ellipse);
	}

	public void visitFrame(JRFrame frame)
	{
		visitor.visitFrame(frame);
	}

	public void visitImage(JRImage image)
	{
		visitor.visitImage(image);
	}

	public void visitLine(JRLine line)
	{
		visitor.visitLine(line);
	}

	public void visitRectangle(JRRectangle rectangle)
	{
		visitor.visitRectangle(rectangle);
	}

	public void visitStaticText(JRStaticText staticText)
	{
		visitor.visitStaticText(staticText);
	}

	public void visitSubreport(JRSubreport subreport)
	{
		visitor.visitSubreport(subreport);
	}

	public void visitTextField(JRTextField textField)
	{
		visitor.visitTextField(textField);
	}

	public void visitComponentElement(JRComponentElement componentElement)
	{
		visitor.visitComponentElement(componentElement);
	}

	public void visitGenericElement(JRGenericElement element)
	{
		visitor.visitGenericElement(element);
	}

}
