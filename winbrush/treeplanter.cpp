//treeplanter.cpp

#include "treeplanter.h"

int g_nTreeCount = 0;

//tree planter stuff
TreePlanter::TreePlanter( model_t* model, vec3_t x, vec3_t y, vec3_t z ) {
		Plant.TreeModel( model );
		Plant.TreePosition( model, x, y, z );
}