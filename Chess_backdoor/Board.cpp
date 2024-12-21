#include "Board.h"

Board::Board()
{
	whiteTurn = true;
	_pieces = new Piece[8*8];

	// when finish the all the classes add them to the board
}

/*
* this function takes the chess coords and translates them to a placement in the array
* example: a1(top left) -> a = the left most collumn (0) + 1 = the top most row (0*8) => 0
*/
int Board::translator(std::string coords)
{
	int num = 0;
	num += (coords[1] - '1') * 8;
	num += (coords[0] - 'a');

	return num;
}

void Board::printBoard()
{
	for (int x = 0; x < 8; x++)
	{
		for (int i = 0;i < 8;i++)
		{
			std::cout << _pieces[x * 8 + i].getKind()[0];
		}
		std::cout << std::endl;
	}
}

/*
* this function recieves the starting point(the piece we move) and moves it to the ending point;
*/
void Board::move(std::string start, std::string end)
{
	if (_pieces[translator(start)].getKind() == "empty")
	{
		 throw std::string("No piece in the coordinates you mentioned");
	}
	_pieces[translator(start)].move(end);
}

