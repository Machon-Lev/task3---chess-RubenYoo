#include "Rook.h"
#include "Board.h"

int Rook::move(std::string fromTo, Board* board)
{
    // collecting positions

	int fromRow = std::tolower(fromTo[0]) - 'a';
	int fromColumn = fromTo[1] - '1';

	int toRow = std::tolower(fromTo[2]) - 'a';
	int toColumn = fromTo[3] - '1';

    // cheking if it's a valid move

	if (fromRow != toRow && fromColumn != toColumn)
		return 21;
    
    // checking if a piece is blocking the move

    int rowStep = (toRow - fromRow) > 0 ? 1 : -1;
    int colStep = (toColumn - fromColumn) > 0 ? 1 : -1;

    if (fromRow != toRow) {
        for (int row = fromRow + rowStep; row != toRow; row += rowStep) {
            if (board->is_piece_exist(row, fromColumn))
                return 21; 
        }
    }
    else {
        for (int col = fromColumn + colStep; col != toColumn; col += colStep) {
            if (board->is_piece_exist(fromRow, col))
                return 21;
        }
    }

    // is is a valid move

	return 42;
}
