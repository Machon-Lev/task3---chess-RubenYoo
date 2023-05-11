#pragma once
#include "Piece.h"

class Piece;

class Rook : public Piece {

public:
	Rook(Color color) : Piece(rook, color) {}
	Rook() = default;
	int move(std::string fromTo, Board* board) override;
};