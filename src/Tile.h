#pragma once
#ifndef __TILE__
#define __TILE__
#include "DisplayObject.h"


class Tile: public DisplayObject
{
public:
	void draw() override;
	void update() override;
	void clean() override;

private:
};


#endif /*__TILE__*/