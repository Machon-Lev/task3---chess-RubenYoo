#pragma once
#include "Piece.h"

class Piece;

class Knight : public Piece {

public:
	Knight(Color color) : Piece(knight, color) {}
	int move(std::string fromTo, Board* board) override;
};