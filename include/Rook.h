#pragma once
#include "Piece.h"

class Piece;

// Rook class
class Rook : public Piece {

public:
	// constructor
	Rook(Color color) : Piece(rook, color) {}

	// move method
	int move(std::string fromTo, Board* board) override;
};