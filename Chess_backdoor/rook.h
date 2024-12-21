#pragma once
#include "Piece.h"
#include <iostream>


class rook : Piece
{
public:
	rook(std::string kind, std::string place, std::string color);
	virtual void move(std::string coords) override;
};