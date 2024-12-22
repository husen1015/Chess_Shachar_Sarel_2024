#include <iostream>

class Piece
{
protected:
	std::string _kind;
	std::string _place;
	char _color;
	bool canEat;

public:
	// builder
	Piece();
	Piece(std::string kind, std::string place, char color);

	int translator(std::string coords); // converts chess coordinates into the array coordinates
	std::string getKind() const;
	char getColor() const;

	int translator(std::string coords);

	virtual void move(std::string coords);// moves the piece
};