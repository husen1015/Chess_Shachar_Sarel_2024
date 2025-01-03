#include "Piece.h"

Piece::Piece()
{
	_kind = 'X';
}

Piece::Piece(char kind, std::string place, char color)
{
	this->_kind = kind;
	this->_place = place;
	this->_color = color;
	this->canEat = false;
}

/*
* this function takes the chess coords and translates them to a placement in the array
* example: a1(top left) -> a = the left most collumn (0) + 1 = the top most row (0*8) => 0
*/
int Piece::translator(std::string coords)
{
	int num = 0;
	num += (coords[1] - '1') * 8;
	num += (coords[0] - 'a');

	return num;
}

char Piece::getKind() const
{
	return _kind;
}

char Piece::getColor() const
{
	return _color;
}

void Piece::move(std::string coords)
{
	this->_place = coords;
}

int Piece::translator(std::string coords)
{
	int num = 0;
	num += (coords[1] - '1') * 8;
	num += (coords[0] - 'a');

	return num;
}
