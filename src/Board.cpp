#include "Board.h"
#include "Piece.h"
#include "Rook.h"

Board::Board(std::string board)
{
	_turn = white;
	_chess = false;


	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLUMNS; j++)
		{
			switch (board[i * 8 + j])
			{
				case 'R': _board[i][j] = std::make_unique<Rook>(white); break;
				case 'r': _board[i][j] = std::make_unique<Rook>(black); break;
				//case 'N': _board[i][j] = std::make_unique<Knight>(white); break;
				//case 'n': _board[i][j] = std::make_unique<Knight>(black); break;
				//case 'B': _board[i][j] = std::make_unique<Bishop>(white); break;
				//case 'b': _board[i][j] = std::make_unique<Bishop>(black); break;
				//case 'K': _board[i][j] = std::make_unique<King>(white); break;
				//case 'k': _board[i][j] = std::make_unique<King>(black); break;
				//case 'Q': _board[i][j] = std::make_unique<Queen>(white); break;
				//case 'q': _board[i][j] = std::make_unique<Queen>(black); break;
				//case 'P': _board[i][j] = std::make_unique<Pawn>(white); break;
				//case 'p': _board[i][j] = std::make_unique<Pawn>(black); break;
				case '#': _board[i][j] = nullptr; break;
				default: break;
			}
		}
	}

}

int Board::move_piece(std::string fromTo)
{
	int code = 0;

	int fromRow = std::tolower(fromTo[0]) - 'a';
	int fromColumn = fromTo[1] - '1';

	int toRow = std::tolower(fromTo[2]) - 'a';
	int toColumn = fromTo[3] - '1';


	if (_board[fromRow][fromColumn] == nullptr)
		return 11;

	if (_board[fromRow][fromColumn]->get_color() != _turn)
		return 12;

	if (_board[toRow][toColumn] != nullptr && _board[toRow][toColumn]->get_color() == _turn)
		return 13;
	
	code = _board[fromRow][fromColumn]->move(fromTo, this);

	if (code == 41 || code == 42)
	{
		change_turn();
		_board[toRow][toColumn] = std::move(_board[fromRow][fromColumn]);
	}
		

	return code;
}


bool Board::is_piece_exist(size_t row, size_t column)
{
	if (_board[row][column] == nullptr)
		return false;

	return true;
}

void Board::change_turn()
{
	if (_turn == white)
		_turn = black;
	else
		_turn = white;
}
