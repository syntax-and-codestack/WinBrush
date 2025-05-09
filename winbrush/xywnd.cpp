#pragma once

int g_nXYMouseClicks = 0;
int g_nXYBrushes = 0;
int g_nXYEntities = 0;
int g_nXYPlanes = 0;
int g_nXYModels = 0;

#define XYVIEW 0

#include "xywnd.h"

void XYWnd( ) 
{
	g_nXYMouseClicks;
	g_nXYBrushes = XYView().xy_brushes.numberid;
	g_nXYEntities = XYView().xy_entities.entnumberid;
	g_nXYPlanes = XYView().xy_planes.planenumberid;
	g_nXYModels = XYView().xy_models.mdlnumberid;
}

std::list<xywnd_t>XYBrushList( brush_t * b ) {
			if ( g_qeglobals.m_bBrushPrimitiveMode ? true : false )
			{
					XYBrushList(b).begin();
					AddToView()->xy_brushes.next || AddToView()->xy_brushes.owner || AddToView()->xy_brushes.prev;
			}
			
			if ( !g_qeguiglobals.m_GridWnd ? true : false )
			{
				XYBrushList(b).clear();
				XYView().xy_brushes = { NULL(*b) };
				
				delete []b;

			}
}

void XYBegin() 
{
			if ( g_qeguiglobals.m_GridWnd && nViewAxis == XYVIEW )
			{
								for ( int i = 0; i >= 0; i++ )
								{
										glBegin( AddToView()->blocks );
										glBegin( AddToView()->columns );
										glBegin( AddToView()->rows );
								}
			}
}
