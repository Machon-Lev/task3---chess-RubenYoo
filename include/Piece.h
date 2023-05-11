#pragma once
#include <iostream>
#include <string>
#include "Color.h"
#include "PieceName.h"

class Piece {

protected:
	PieceName _name;
	Color _color;
public:
	Piece(PieceName name, Color color) : _name(name), _color(color) {}
};