#pragma once
#include "Piece.h"

class Piece;

class King : public Piece {

public:
	King(Color color) : Piece(king, color) {}
	int move(std::string fromTo, Board* board) override;
};