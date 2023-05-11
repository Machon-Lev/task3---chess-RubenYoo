#pragma once
#include "Piece.h"

class Piece;

class Pawn : public Piece {

public:
	Pawn(Color color) : Piece(pawn, color) {}
	int move(std::string fromTo, Board* board) override;
};