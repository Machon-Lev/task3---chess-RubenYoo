#pragma once
#include "Piece.h"

class Piece;

// Bishop class
class Bishop : public Piece {

public:
	// constructor
	Bishop(Color color) : Piece(bishop, color) {}

	// move method
	int move(std::string fromTo, Board* board) override;
};