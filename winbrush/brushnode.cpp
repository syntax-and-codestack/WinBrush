
#include "stdafx.h"

//brushnode.cpp
//globals

int g_nBrushNodeNumber = 0;

const char* Brush_NodeEpair( brush_t* node, epair_t* epair )
{
			if ( bBrush_MadeNode ? false )
			{
					node->numberid = g_nBrushNodeNumber++;
					epair->key;
					epair->value;
					epair->brush = node;
			}
}
