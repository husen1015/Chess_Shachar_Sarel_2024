#include <iostream>

class Piece
{
protected:
	std::string _kind;
	std::string _place;
	std::string _color;

public:
	// builder
	Piece() = default;
	Piece(std::string kind, std::string place, std::string color);

	std::string getKind() const;

	virtual void move(std::string coords);// moves the piece
};