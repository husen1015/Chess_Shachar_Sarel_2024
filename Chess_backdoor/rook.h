#pragma once
#include "Piece.h"
#include <iostream>


class Rook : Piece
{
public:
	Rook(std::string kind, std::string place, char color);
	virtual void move(std::string coords) override;
};