#include "Knight.h"
#include "Board.h"

int Knight::move(std::string fromTo, Board* board)
{
    // collecting positions

    int fromRow = std::tolower(fromTo[0]) - 'a';
    int fromColumn = fromTo[1] - '1';

    int toRow = std::tolower(fromTo[2]) - 'a';
    int toColumn = fromTo[3] - '1';

    // cheking if it's a valid move

    int rowDiff = std::abs(toRow - fromRow);
    int colDiff = std::abs(toColumn - fromColumn);

    if (!((rowDiff == 2 && colDiff == 1) || (rowDiff == 1 && colDiff == 2)))
        return 21; 


    // it is a valid move

	return 42;
}
