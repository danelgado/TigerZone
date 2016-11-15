#include "Tile.h"
#include <iostream>
Tile::Tile(int type)
{
	if (type == 1)
	{
		this->up = Face('j', 'j', 'j');
		this->down = Face('j', 'j', 'j');
		this->left = Face('j', 'j', 'j');
		this->right = Face('j', 'j', 'j');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 2)
	{
		this->up = Face('j', 'j', 'j');
		this->down = Face('j', 'j', 'j');
		this->left = Face('j', 'j', 'j');
		this->right = Face('j', 'j', 'j');
		this->center = Block('d');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 3)
	{
		this->up = Face('j', 'j', 'j');
		this->down = Face('j', 't', 'j');
		this->left = Face('j', 'j', 'j');
		this->right = Face('j', 'j', 'j');
		this->center = Block('d');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 4)
	{
		this->up = Face('j', 't', 'j');
		this->down = Face('j', 't', 'j');
		this->left = Face('j', 't', 'j');
		this->right = Face('j', 't', 'j');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 5)
	{
		this->up = Face('j', 't', 'j');
		this->down = Face('j', 't', 'j');
		this->left = Face('j', 'j', 'j');
		this->right = Face('j', 'j', 'j');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 6)
	{
		this->up = Face('j', 't', 'j');
		this->down = Face('j', 'j', 'j');
		this->left = Face('j', 't', 'j');
		this->right = Face('j', 'j', 'j');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 7)
	{
		this->up = Face('j', 't', 'j');
		this->down = Face('j', 't', 'j');
		this->left = Face('j', 't', 'j');
		this->right = Face('j', 'j', 'j');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 8)
	{
		this->up = Face('l', 'l', 'l');
		this->down = Face('l', 'l', 'l');
		this->left = Face('l', 'l', 'l');
		this->right = Face('l', 'l', 'l');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 9)
	{
		this->up = Face('j', 'j', 'j');
		this->down = Face('l', 'l', 'l');
		this->left = Face('l', 'l', 'l');
		this->right = Face('l', 'l', 'l');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 10)
	{
		this->up = Face('l', 'l', 'l');
		this->down = Face('j', 'j', 'j');
		this->left = Face('j', 'j', 'j');
		this->right = Face('l', 'l', 'l');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 11)
	{
		this->up = Face('j', 'j', 'j');
		this->down = Face('j', 'j', 'j');
		this->left = Face('l', 'l', 'l');
		this->right = Face('l', 'l', 'l');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 12)
	{
		this->up = Face('l', 'l', 'l');
		this->down = Face('l', 'l', 'l');
		this->left = Face('j', 'j', 'j');
		this->right = Face('j', 'j', 'j');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 13)
	{
		this->up = Face('l', 'l', 'l');
		this->down = Face('j', 'j', 'j');
		this->left = Face('j', 'j', 'j');
		this->right = Face('j', 'j', 'j');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 14)
	{
		this->up = Face('j', 'j', 'j');
		this->down = Face('l', 'l', 'l');
		this->left = Face('j', 'j', 'j');
		this->right = Face('l', 'l', 'l');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 15)
	{
		this->up = Face('j', 't', 'j');
		this->down = Face('j', 'j', 'j');
		this->left = Face('j', 't', 'j');
		this->right = Face('l', 'l', 'l');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 16)
	{
		this->up = Face('j', 't', 'j');
		this->down = Face('j', 'j', 'j');
		this->left = Face('j', 't', 'j');
		this->right = Face('l', 'l', 'l');
		this->boar = true;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 17)
	{
		this->up = Face('j', 'j', 'j');
		this->down = Face('j', 't', 'j');
		this->left = Face('j', 't', 'j');
		this->right = Face('l', 'l', 'l');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 18)
	{
		this->up = Face('j', 'j', 'j');
		this->down = Face('j', 't', 'j');
		this->left = Face('j', 't', 'j');
		this->right = Face('l', 'l', 'l');
		this->boar = false;
		this->buffalo = true;
		this->deer = false;
	}
	else if (type == 19)
	{
		this->up = Face('j', 't', 'j');
		this->down = Face('j', 't', 'j');
		this->left = Face('j', 'j', 'j');
		this->right = Face('l', 'l', 'l');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 20)
	{
		this->up = Face('j', 't', 'j');
		this->down = Face('j', 't', 'j');
		this->left = Face('j', 'j', 'j');
		this->right = Face('l', 'l', 'l');
		this->boar = false;
		this->buffalo = false;
		this->deer = true;
	}
	else if (type == 21)
	{
		this->up = Face('j', 't', 'j');
		this->down = Face('l', 'l', 'l');
		this->left = Face('l', 'l', 'l');
		this->right = Face('l', 'l', 'l');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 22)
	{
		this->up = Face('j', 't', 'j');
		this->down = Face('j', 't', 'j');
		this->left = Face('j', 't', 'j');
		this->right = Face('l', 'l', 'l');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 23)
	{
		this->up = Face('j', 't', 'j');
		this->down = Face('j', 't', 'j');
		this->left = Face('j', 't', 'j');
		this->right = Face('l', 'l', 'l');
		this->boar = true;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 24)
	{
		this->up = Face('j', 't', 'j');
		this->down = Face('l', 'l', 'l');
		this->left = Face('j', 't', 'j');
		this->right = Face('l', 'l', 'l');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 25)
	{
		this->up = Face('j', 't', 'j');
		this->down = Face('l', 'l', 'l');
		this->left = Face('j', 't', 'j');
		this->right = Face('l', 'l', 'l');
		this->boar = false;
		this->buffalo = true;
		this->deer = false;
	}
	else if (type == 26)
	{
		this->up = Face('l', 'l', 'l');
		this->down = Face('j', 't', 'j');
		this->left = Face('j', 'j', 'j');
		this->right = Face('j', 'j', 'j');
		this->boar = false;
		this->buffalo = false;
		this->deer = false;
	}
	else if (type == 27)
	{
		this->up = Face('l', 'l', 'l');
		this->down = Face('j', 't', 'j');
		this->left = Face('j', 'j', 'j');
		this->right = Face('j', 'j', 'j');
		this->boar = false;
		this->buffalo = false;
		this->deer = true;
	}
	else
	{
		hasInit = false;
	}
}
Tile::Tile()
{
	hasInit = false;
}
Tile::~Tile()
{
	hasInit = false;
}

std::string Tile::to_string()
{
	return "empty";
}

// Rotate a tile to the right by 90 degrees. (Ex: left face would now be top face, top face would be right, etc...)
void Tile::rotate()
{
	Face upFace = this->up;
	Face downFace = this->down;
	Face leftFace = this->left;
	Face rightFace = this->right;

	this->up = leftFace;
	this->right = upFace;
	this->down = rightFace;
	this->left = downFace;
	
	
}

bool Tile::hasOpenFace()
{
	if(!up.connected() || !down.connected() || !left.connected() || !right.connected()) return true;
	else return false;
}

// Method to obtain all the open faces of a tile. Check each face, if not connected then push to vector
std::vector<std::string> Tile::getOpenFaces()
{
	std::vector<std::string> openFaces;
	if(!up.connected())
		openFaces.push_back("up");
	if(!down.connected())
		openFaces.push_back("down");
	if(!left.connected())
		openFaces.push_back("left");
	if(!right.connected())
		openFaces.push_back("right");

	return openFaces;
}
