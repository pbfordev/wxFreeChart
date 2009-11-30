/////////////////////////////////////////////////////////////////////////////
// Name:	renderer.cpp
// Purpose: renderer implementation
// Author:	Moskvichev Andrey V.
// Created:	2008/11/07
// RCS-ID:	$Id: wxAdvTable.h,v 1.3 2008/11/07 16:42:58 moskvichev Exp $
// Copyright:	(c) 2008-2009 Moskvichev Andrey V.
// Licence:	wxWidgets licence
/////////////////////////////////////////////////////////////////////////////

#include <wx/chartrenderer.h>

IMPLEMENT_CLASS(Renderer, wxObject)

Renderer::Renderer()
{
}

Renderer::~Renderer()
{
}

void Renderer::SetSerieColour(int serie, wxColour *colour)
{
	m_serieColours[serie] = *colour;
	FireNeedRedraw();
}

wxColour Renderer::GetSerieColour(int serie)
{
	if (m_serieColours.find(serie) == m_serieColours.end()) {
		return GetDefaultColour(serie);
	}
	return m_serieColours[serie];
}

void Renderer::SetSerieSymbol(int serie, Symbol *symbol)
{
	m_serieSymbols[serie] = symbol;
	FireNeedRedraw();
}

Symbol *Renderer::GetSerieSymbol(int serie)
{
	if (m_serieSymbols.find(serie) == m_serieSymbols.end()) {
		return GetDefaultSymbol(serie);
	}
	return m_serieSymbols[serie];
}

void Renderer::DrawLegendSymbol(wxDC &dc, wxRect rcSymbol, int serie)
{
	wxColour colour = GetSerieColour(serie);

	dc.SetBrush(*wxTheBrushList->FindOrCreateBrush(colour));
	dc.SetPen(*wxThePenList->FindOrCreatePen(colour, 1, wxSOLID));

	dc.DrawRectangle(rcSymbol);
}
