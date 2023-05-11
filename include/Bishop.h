#pragma once
#include "Piece.h"

class Piece;

class Bishop : public Piece {

public:
	Bishop(Color color) : Piece(bishop, color) {}
	int move(std::string fromTo, Board* board) override;
};