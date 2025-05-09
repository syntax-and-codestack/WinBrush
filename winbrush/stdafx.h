#pragma once
#ifndef STDAFX_H
#define STDAFX_H

#include "mfclib.h"
#include "brush.h"
#include <gl/GL.h>
#include <gl/GLU.h>
#include <set>
#include <list>

#define GRID_BACKGROUND_COLOR 0
#define GRID_POWER 1
#define GRID_SEL_BRUSHES 2
#define GRID_TEX_TOOL 3 
#define GRID_TEX_DIMENSIONS 4

//xy grid tools
void Refresh_GridView();
void Add_BrushToGridView();
void Add_EntityToGridView();
void Radiant_GridBackgroundColor();
void Radiant_GridBlockColor();
void Radiant_GridLabelsShow();
void Radiant_SignalMouseDetected();
void Radiant_GridShowNames();
void Lock_GridView();
void Change_GridAxisView();
bool Grid_True() { return true; };
bool Grid_False() { return false; };
void Lock_GridNoDraw();
bool Toggle_GridAutoBrushCaulk();
void Free_GridView();

//vec tools
typedef float vec_t;
typedef vec_t vec3_t[3];
typedef vec_t vec4_t[4];
typedef vec_t vec6_t[6];

typedef struct brush_s {

	int numberid;
	brush_t* prev, * owner, * next;
	vec3_t mins;
	vec3_t maxs;

	int faces[6];
	brush_t * brush_faces[6];

	vec3_t origin;

	texdef_t* tdef;

}brush_t;

void Brush_SetCount(brush_t* b, const char* key, int* _t);
void Brush_DrawXY( brush_t * b, int nview );
void Brush(brush_t* b);

const char* Brush_Name( brush_t* b );

//printf
void* Sys_Printf( const char* text, ... );

brush_t* Brush_Allocate();
brush_t* Debug_Brush(brush_t* b);
std::size_t Brush_Size(brush_t * b);

void Clip_Brush(brush_t* b);

void Brush_Previous(brush_t* b);
void Brush_Owner(brush_t* b);
void Brush_Next(brush_t* b);

void Brush_MakePatch(brush_t* b);

//void Photoshop_Import(const char * port);

void Free_Brush(brush_t* b);
bool Brush_Free(brush_t* b);

bool BrushSelected(brush_t* b);
bool SelectBrush(brush_t* b);

typedef struct plane_s {
	vec3_t normal;
	double dist;
	int type;

	brush_t* bplane;
	plane_t* pln;

	int planenumberid;

}plane_t;

typedef struct {
	bool m_bBrushPrimitiveMode;
	bool m_bPlanePrimitiveMode;
	bool m_bPolygonTexdefMode;
}Q_EGlobals;

bool PlaneSelected(plane_t* p);
bool SelectPlane(plane_t* p);

typedef struct model_s {
	int VERTICE_COUNT;
	int mdlnumberid
	const char* mdl_file;
}model_t;

typedef struct texdef_s {
	int texdef_type;
	float texdef_width;
	float texdef_height;

	bool m_bTexdefTransparentMode;

	const char* texdef_file;

	vec3_t coords[2][2];

}texdef_t;

void Construct_BrushPlane(plane_t* p, brush_t* b);

void WINAPI UpdatePanel();
void WINAPI UpdateWindow();

typedef struct {
	CWND* m_MainFrame;
	CWND* m_CamWnd;
	CWND* m_GridWnd;
	CWND* m_ToolBarWnd;
	bool m_bFilterWindows;
}Q_EGlobals_Gui;

bool bXYWndDragged( plane_t * pln );
bool bXYWndDragged( brush_t* brsh );

int snap( vec3_t v );

#define GRID_PEN_COLOR

void Grid_PenColor();

Q_EGlobals g_qeglobals;
Q_EGlobals_Gui g_qeguiglobals;

typedef struct patch_s {
	vec3_t patch_brush;
}patch_t;

void Patch_AddFakeFace( patch_t* p, face_t* f );
void Patch_MakeFakePlane( patch_t* p, plane_t* pln );
void Patch_Curve( patch_t* p, vec3_t fCurve );
void Patch_Select( patch_t* p, bool pSel );

char* path[1024];

static int MouseButton(int value);

//face stuff tools
typedef struct face_s {
	bool m_bMakePatch;
	bool m_bFaceSelect;
	bool bDetailed;

	vec3_t fvecs[4];
	int points[4];

	bool f_Weld;
	face_t* Brush_Face;

	void Delete_Face(face_t* f) {
		delete []f;
	}

	bool Face_Null;
	const char* pFaceTexdefFilename;
}face_t;

bool SelectFace( face_t * f );

int nViewAxis;

typedef struct entity_s {
	const char* pKey, * pValue;
	vec3_t pPosition;
	bool pDrag;
	bool pSpawn;
	int entnumberid;
}entity_t;

void Entity_MakeNull(entity_t* e) { NULL; };
void Spawn_NewEntity(entity_t* e) { e = new entity_t; };
void Spawn();

/*
 %file stuff%
*/
void Save();
void Open();
void SaveAs();
void Close();

#endif