#pragma once
#include <iostream>
#include <string>
#include "Color.h"
#include "PieceName.h"

class Board;

// Piece abstract class
class Piece {

protected:
	// private variables
	PieceName _name;
	Color _color;

public:
	// constuctor
	Piece(PieceName name, Color color) : _name(name), _color(color) {}

	// virtual defautl destructor
	virtual ~Piece() = default;

	// getters
	Color get_color();
	PieceName get_name();

	// move method (pure virtual)
	virtual int move(std::string fromTo, Board* board) = 0;
};