#include "Tile.h"

#include "TextureManager.h"
#include "Util.h"

Tile::Tile()
{
	//TextureManager::Instance()->load("../Assets/textures/tile.png", "tile");

	//auto size = TextureManager::Instance()->getTextureSize("tile");
	setWidth(Config::TILE_SIZE);
	setHeight(Config::TILE_SIZE);

	setType(TILE);
}

Tile::~Tile()
= default;

void Tile::draw()
{
	Util::DrawRect(getTransform()->position, getWidth(), getHeight());
}

void Tile::update()
{
}

void Tile::clean()
{
}
