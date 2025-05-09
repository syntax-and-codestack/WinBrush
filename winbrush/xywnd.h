#pragma once

#ifndef XYWND_H
#define XYWND_H

#include "stdafx.h"

class XYWnd {
public:
	XYWnd();
	~XYWnd();
	int columns;
	int rows;
	int blocks;

	bool xyMouse_Dragged( XYWnd *& xywnd );
	void XYWNDRectangle( RECT& pRect, XYWnd* wnd );
	void XYBegin();

	brush_t xy_brushes;
	plane_t xy_planes;
	face_t xy_faces;
	entity_t xy_entities;
	model_t xy_models;

};

XYWnd* AddToView();
XYWnd XYView();


std::list<XYWnd>XYBrushList(brush_t* b);

#endif