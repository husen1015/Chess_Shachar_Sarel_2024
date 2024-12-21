#ifndef PIECE_H
#define PIECE_H

#include "Piece.h"

class Board
{
private:
	bool whiteTurn;
	Piece* _pieces;

public:
	Board(); //C'tor

	int translator(std::string coords); // converts chess coordinates into the array coordinates

	void printBoard(); // prints the board
};

#endif