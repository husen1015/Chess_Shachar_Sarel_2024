#pragma once
#include "Piece.h"
#include <iostream>

class King : Piece
{
public:
	King(char kind, std::string place, char color);
	virtual void move(std::string coords);
};