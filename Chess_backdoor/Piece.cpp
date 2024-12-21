#include "Piece.h"

Piece::Piece(std::string kind, std::string place, std::string color)
{
	this->_kind = kind;
	this->_place = place;
	this->_color = color;
}

std::string Piece::getKind() const
{
	return _kind;
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
