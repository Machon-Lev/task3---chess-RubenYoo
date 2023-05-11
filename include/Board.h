#pragma once
#include <iostream>
#include <vector>
#include "Piece.h"
#include "Color.h"

constexpr auto ROWS = 8;
constexpr auto COLUMNS = 8;

class Board {
	Piece* _board[ROWS][COLUMNS];
	Color _turn = white;
	bool _chess = false;

};