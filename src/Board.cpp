#include "Board.h"

Board::Board()
{
	_turn = white;
	_chess = false;

	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLUMNS; j++)
		{
			_board[i][j] = nullptr;
		}
	}


}

int Board::move_piece(std::string fromTo)
{
	int fromRow = std::tolower(fromTo[0]) - 'a';
	int fromColumn = fromTo[1] - '1';

	int ToRow = std::tolower(fromTo[2]) - 'a';
	int ToColumn = fromTo[3] - '1';


	if (_board[fromRow][fromColumn] == nullptr)
		return 11;

	
	std::cout << fromRow << " " << fromColumn;
	return 0;
}
