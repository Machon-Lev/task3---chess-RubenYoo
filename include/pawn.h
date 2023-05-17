#pragma once
#include "Piece.h"

class Piece;

// Pawn class
class Pawn : public Piece {

public:
	// constructor
	Pawn(Color color) : Piece(pawn, color) {}

	// move method
	int move(std::string fromTo, Board* board) override;
};