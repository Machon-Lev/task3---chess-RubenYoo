#pragma once
#include "Piece.h"

class Piece;

class Queen : public Piece {

public:
	Queen(Color color) : Piece(queen, color) {}
	int move(std::string fromTo, Board* board) override;
};