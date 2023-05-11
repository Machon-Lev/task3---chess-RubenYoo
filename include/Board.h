#pragma once
#include <iostream>
#include <vector>
#include "Piece.h"
#include "Color.h"

constexpr auto ROWS = 8;
constexpr auto COLUMNS = 8;

class Board {
	std::unique_ptr<Piece> _board[ROWS][COLUMNS];
	Color _turn;
	bool _chess;
public:
	Board();
	int move_piece(std::string fromTo);
};