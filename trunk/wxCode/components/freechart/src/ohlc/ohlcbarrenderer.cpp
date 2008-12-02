/////////////////////////////////////////////////////////////////////////////
// Name:	ohlcbarrenderer.cpp
// Purpose: OHLC bar renderer implementation
// Author:	Moskvichev Andrey V.
// Created:	2008/11/07
// RCS-ID:	$Id: wxAdvTable.h,v 1.3 2008/11/07 16:42:58 moskvichev Exp $
// Copyright:	(c) 2008 Moskvichev Andrey V.
// Licence:	wxWidgets licence
/////////////////////////////////////////////////////////////////////////////

#include <wx/ohlc/ohlcbarrenderer.h>

OHLCBarRenderer::OHLCBarRenderer()
{
}

OHLCBarRenderer::~OHLCBarRenderer()
{
}

void OHLCBarRenderer::DrawItem(wxDC &dc, wxCoord x, wxCoord open, wxCoord high, wxCoord low, wxCoord close)
{
	wxCoord leftX = x - 5;
	wxCoord centerX = x;
	wxCoord rightX = x + 5;

	dc.SetPen(*wxBLACK_PEN);

	dc.DrawLine(leftX, open, centerX, open);
	dc.DrawLine(centerX, low, centerX, high);
	dc.DrawLine(centerX, close, rightX, close);
}
