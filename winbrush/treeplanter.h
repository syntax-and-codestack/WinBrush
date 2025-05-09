#pragma once

#ifndef TREEPLANTER_H
#define TREEPLANTER_H

#include "stdafx.h"

class TreePlanter {
public:
	TreePlanter( model_t * model, vec3_t x, vec3_t y, vec3_t z );
	~TreePlanter();

	void TreeModel(model_t* model);
	void TreePosition(model_t* model, vec3_t x, vec3_t y, vec3_t z);

};

TreePlanter Plant;

#endif