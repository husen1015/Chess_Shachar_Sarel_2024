#pragma once
#include "Piece.h"
#include <iostream>

class king : Piece
{
private:
	bool isChecked;

public:
	king(std::string kind, std::string place, std::string color);
	virtual void move(std::string coords);
	bool 
};