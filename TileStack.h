#pragma once

#include "Tile.h"
#include <vector>
#include <algorithm>

class TileStack{
public:
		
	TileStack();
	~TileStack();
	
	void shuffle();
	Tile* draw();
	bool isEmpty();
	
	std::vector<Tile> tiles;
};

