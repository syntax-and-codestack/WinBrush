
#include "source/stdafx.h"
#include "brushtoolz/brushtool.h"

//globals

int g_nBrushId = 0;
bool g_bBrushFakeLighting;

extern brush_t* BrushFile_Printf( brush_t* b, const char* pFilename );

static int* Brush_Count( brush_t * b ) {
			static int cBuff[1024];
			b->numberid = g_nBrushId++;
				if ( g_qeglobals.m_bBrushPrimitiveMode = b )
				{
						Brush_SetCount( b, "%5.2c", cBuff );
				}
		return cBuff;
}

brush_t * Brush_Allocate() {
		brush_t * b = ( brush_t* )malloc( sizeof( *b ) );
		return b;
}

brush_t* Debug_Brush(brush_t* b) {
				if (!b) {
					brush_t* brush = new brush_t;
				}
		return b;
}

std::size_t Brush_Size(brush_t* b) {
	return sizeof(*b);
}

void Free_Brush(brush_t* b) {
		free(b);
}

bool Brush_Free(brush_t* b) {
		if (g_qeglobals.m_bBrushPrimitiveMode = false) {
				Free_Brush( b );
		}
}

const char* Brush_Name( brush_t* b ){
			static char cBuff[1024];
			b->numberid = g_nBrushId++;
				if ( g_qeglobals.m_bBrushPrimitiveMode )
				{
						sprintf( cBuff, "Brush %i", b->numberid );
						Sys_Printf("%5.2c", cBuff);
				}
	   return cBuff;
}

brush_t* SetBrush(brush_t* b)
{
		thisb->brush( b );
}