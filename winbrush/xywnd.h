#pragma once

#ifndef XYWND_H
#define XYWND_H

#include "stdafx.h"

struct xywnd_t {
	int columns;
	int rows;
	int blocks;

	bool xyMouse_Dragged( xywnd_t *& xywnd );
	void XYWNDRectangle( RECT& pRect, xywnd_t * wnd );
	void XYWnd();

	brush_t xy_brushes;
	plane_t xy_planes;
	face_t xy_faces;
	entity_t xy_entities;
	model_t xy_models;

};

xywnd_t* AddToView();
xywnd_t XYView();

void XYBegin();

std::list<xywnd_t>XYBrushList(brush_t* b);

#endif