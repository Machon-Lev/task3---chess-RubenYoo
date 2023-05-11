#pragma once
#include <iostream>
#include <string>
#include "Color.h"
#include "PieceName.h"

class Board;

class Piece {

protected:
	PieceName _name;
	Color _color;
public:
	Piece(PieceName name, Color color) : _name(name), _color(color) {}
	virtual ~Piece() = default;
	Color get_color();
	virtual int move(std::string fromTo, Board* board) = 0;
};