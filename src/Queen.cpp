#include "Queen.h"
#include "Board.h"

int Queen::move(std::string fromTo, Board* board)
{
    int fromRow = std::tolower(fromTo[0]) - 'a';
    int fromColumn = fromTo[1] - '1';

    int toRow = std::tolower(fromTo[2]) - 'a';
    int toColumn = fromTo[3] - '1';

    int rowDiff = std::abs(toRow - fromRow);
    int colDiff = std::abs(toColumn - fromColumn);

    if (fromRow != toRow && fromColumn != toColumn && rowDiff != colDiff)
        return 21; 

    int rowStep = (toRow > fromRow) ? 1 : (toRow < fromRow) ? -1 : 0;
    int colStep = (toColumn > fromColumn) ? 1 : (toColumn < fromColumn) ? -1 : 0;

    int currentRow = fromRow + rowStep;
    int currentCol = fromColumn + colStep;

    while (currentRow != toRow || currentCol != toColumn)
    {
        if (board->is_piece_exist(currentRow, currentCol))
            return 21; 

        currentRow += rowStep;
        currentCol += colStep;
    }

	return 42;
}
