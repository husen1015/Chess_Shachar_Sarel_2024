#pragma once
#include "Piece.h"
#include <iostream>


class rook : Piece
{
private:
	bool _isLegal;

public:
	rook(std::string kind, std::string place, std::string color);
	virtual void move(std::string coords) override;
};