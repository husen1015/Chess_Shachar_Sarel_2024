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
