#include "Board.h"
#include "Bishop.h"

int Bishop::move(std::string fromTo, Board* board)
{
    int fromRow = std::tolower(fromTo[0]) - 'a';
    int fromColumn = fromTo[1] - '1';

    int toRow = std::tolower(fromTo[2]) - 'a';
    int toColumn = fromTo[3] - '1';

    if (std::abs(fromRow - toRow) != std::abs(fromColumn - toColumn))
        return 21; 

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

	return 42;
}
