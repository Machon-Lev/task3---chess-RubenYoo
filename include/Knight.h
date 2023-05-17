#pragma once
#include "Piece.h"

class Piece;

// Knight class
class Knight : public Piece {

public:
	// constructor
	Knight(Color color) : Piece(knight, color) {}

	// move method
	int move(std::string fromTo, Board* board) override;
};