#include "Rook.h"

Rook::Rook(std::string kind, std::string place, char color) : Piece( kind,  place, color)
{
}

void Rook::move(std::string coords)
{
	if (coords[0] == this->_place[0] || coords[1] == this->_place[1])
	{
		this->_place = coords;
	}
}


