#pragma once
#include "Piece.h"

class Piece;

// King class
class King : public Piece {

public:
	// contructor
	King(Color color) : Piece(king, color) {}

	// move method
	int move(std::string fromTo, Board* board) override;
};