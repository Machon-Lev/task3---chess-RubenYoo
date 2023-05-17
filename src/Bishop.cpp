#include "Board.h"
#include "Bishop.h"

// move method
int Bishop::move(std::string fromTo, Board* board)
{

    // collecting positions

    int fromRow = std::tolower(fromTo[0]) - 'a';
    int fromColumn = fromTo[1] - '1';

    int toRow = std::tolower(fromTo[2]) - 'a';
    int toColumn = fromTo[3] - '1';

    // check if it's a valid move

    if (std::abs(fromRow - toRow) != std::abs(fromColumn - toColumn))
        return 21; 

    // check if a piece is blocking the move

    int rowStep = (toRow > fromRow) ? 1 : -1;
    int colStep = (toColumn > fromColumn) ? 1 : -1;

    int currentRow = fromRow + rowStep;
    int currentCol = fromColumn + colStep;

    while (currentRow != toRow && currentCol != toColumn)
    {
        if (board->is_piece_exist(currentRow, currentCol))
            return 21; 

        currentRow += rowStep;
        currentCol += colStep;
    }

    // it is a valid move

	return 42;
}
