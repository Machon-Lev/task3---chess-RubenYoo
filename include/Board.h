#pragma once
#include <memory>
#include <string>
#include <vector>
#include "Piece.h"
#include "PieceName.h"
#include "Color.h"


constexpr auto ROWS = 8;
constexpr auto COLUMNS = 8;

class Piece;

class Board {
	std::unique_ptr<Piece> _board[ROWS][COLUMNS];
	Color _turn;
	bool _chess;
public:
	Board(std::string board);
	int move_piece(std::string fromTo);
	bool is_piece_exist(size_t row, size_t column);
	void change_turn();
	bool check_chess(Color color);
};