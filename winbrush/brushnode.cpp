
#include "stdafx.h"

//brushnode.cpp
//globals

int g_nNodeType = 0;
int g_nBrushNodeNumber = 0;

const char* Brush_NodeEpair( brush_t* node, epair_t* epair )
{
			if ( bBrush_MadeNode ? true : true )
			{
					node->numberid = g_nBrushNodeNumber++;
					epair->key;
					epair->value;
					epair->brush = node;
			}
}

//set node stuff...
std::set<brush_t&>Brush_Node( brush_t * node, node_t * n ) {

				//path node
				if (node->bKey == "node" && node->bValue == "path")
				{
						node->numberid == n->m_PathNode;
				}

				//ai node
				if (node->bKey == "node" && node->bValue == "ai")
				{
						node->numberid == n->m_AiNode;
				}

				//light node
				if (node->bKey == "node" && node->bValue == "light")
				{
						node->numberid == n->m_LightNode;
				}
}
