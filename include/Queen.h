#pragma once
#include "Piece.h"

class Piece;

// Queen class
class Queen : public Piece {

public:
	// constructor
	Queen(Color color) : Piece(queen, color) {}

	// move method
	int move(std::string fromTo, Board* board) override;
};