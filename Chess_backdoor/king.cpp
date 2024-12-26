#include "king.h"

King::King(char kind, std::string place, char color) : Piece(kind, place, color)
{
	this->isChecked = false;
}

void King::move(std::string coords)
{		//first check                                                                                /second check
	if ((coords[0] == _place[0] + 1 && (coords[1] < _place[1] + 1 || coords[1] < _place[1] - 1)) || (coords[0] == _place[0] - 1 && (coords[1] < _place[1] + 1 || coords[1] < _place[1] - 1)))
	{		//first check                                                                                /second check
		if ((coords[1] == _place[1] + 1 && (coords[0] < _place[0] + 1 || coords[0] < _place[0] - 1)) || (coords[1] == _place[1] - 1 && (coords[0] < _place[0] + 1 || coords[0] < _place[0] - 1)))
		{
			_place = coords;
		}
	}
}

