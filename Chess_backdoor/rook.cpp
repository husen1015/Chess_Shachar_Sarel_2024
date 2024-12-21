#include "rook.h"

rook::rook(std::string kind, std::string place, std::string color) : Piece( kind,  place, color)
{
}

void rook::move(std::string coords)
{
	if (coords[0] == this->_place[0] && coords[1] == this->_place[1])
	{
		this->_place = coords;
	}
}


