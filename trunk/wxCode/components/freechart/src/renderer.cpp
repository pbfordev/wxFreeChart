/////////////////////////////////////////////////////////////////////////////
// Name:	renderer.cpp
// Purpose:
// Author:	Moskvichev Andrey V.
// Created:	2008/11/07
// RCS-ID:	$Id: wxAdvTable.h,v 1.3 2008/11/07 16:42:58 moskvichev Exp $
// Copyright:	(c) 2008 Moskvichev Andrey V.
// Licence:	wxWidgets licence
/////////////////////////////////////////////////////////////////////////////

#include <wx/renderer.h>

Renderer::Renderer()
{
}

Renderer::~Renderer()
{
}

void Renderer::PrepareDC(wxDC &dc)
{
	// do noting - default behavior - method used for optimization
}
