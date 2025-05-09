#define MAP_SIZE const 0x0

#include "stdafx.h"

extern brush_t active_brushes;
extern entity_t active_entities;
extern model_t active_models;
extern texdef_t active_texdef;

//map save directory
char active_map_path[64];
const char* pMapName;
const char * pMapExtension = ".map";

const char* MapFile_Extension() {
	return pMapExtension;
}

const char* Map_FileName() {
	return pMapName;
}
