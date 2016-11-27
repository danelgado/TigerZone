#ifndef TILESTACK_H
#define TILESTACK_H

#include "Tile.h"
#include <vector>
#include <algorithm>

class TileStack{
public:

	TileStack();
	TileStack(std::vector<int> tileVector);
	~TileStack();

	void shuffle();
	Tile draw();
	bool isEmpty();

	std::vector<Tile> tiles;
};

#endif
