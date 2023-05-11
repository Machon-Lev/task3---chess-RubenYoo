#include "Rook.h"
#include "Board.h"

int Rook::move(std::string fromTo, Board* board)
{
	int fromRow = std::tolower(fromTo[0]) - 'a';
	int fromColumn = fromTo[1] - '1';

	int toRow = std::tolower(fromTo[2]) - 'a';
	int toColumn = fromTo[3] - '1';

	if (fromRow != toRow && fromColumn != toColumn)
		return 21;
    
    int rowStep = (toRow - fromRow) > 0 ? 1 : -1;
    int colStep = (toColumn - fromColumn) > 0 ? 1 : -1;

    if (fromRow != toRow) {
        for (int row = fromRow + rowStep; row != toRow; row += rowStep) {
            if (board->is_piece_exist(row, fromColumn))
                return 21; // piece obstructing the path
        }
    }
    else {
        for (int col = fromColumn + colStep; col != toColumn; col += colStep) {
            if (board->is_piece_exist(fromRow, col))
                return 21; // piece obstructing the path
        }
    }

	return 42;
}
