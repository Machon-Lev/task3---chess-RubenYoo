#include "King.h"
#include "Board.h"

// move method
int King::move(std::string fromTo, Board* board)
{
    // collecting positions

    int fromRow = std::tolower(fromTo[0]) - 'a';
    int fromColumn = fromTo[1] - '1';

    int toRow = std::tolower(fromTo[2]) - 'a';
    int toColumn = fromTo[3] - '1';


    // checking if it's a valid move
    if (std::abs(fromRow - toRow) > 1 || std::abs(fromColumn - toColumn) > 1)
        return 21; 

    // it is a valid move

    return 42;
}
