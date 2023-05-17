#include "Pawn.h"
#include "Board.h"

int Pawn::move(std::string fromTo, Board* board)
{
    int fromRow = std::tolower(fromTo[0]) - 'a';
    int fromColumn = fromTo[1] - '1';

    int toRow = std::tolower(fromTo[2]) - 'a';
    int toColumn = fromTo[3] - '1';

    int rowDiff = toRow - fromRow;
    int colDiff = toColumn - fromColumn;

    // Check if the move is within the pawn's range
    if (board->get_turn() == white)
    {
        // Pawn moves one square forward
        if (rowDiff == 1 && colDiff == 0) 
        {
            if (board->is_piece_exist(toRow, toColumn))
                return 21;

            return 42; 
        }
        // Pawn moves two squares forward from starting position
        else if (rowDiff == 2 && colDiff == 0 && fromRow == 1) 
        {
            if (board->is_piece_exist(toRow, toColumn) || board->is_piece_exist(toRow - 1, toColumn))
                return 21; 

            return 42; 
        }
        // Pawn captures diagonally
        else if (rowDiff == 1 && std::abs(colDiff) == 1) 
        {
            if (!board->is_piece_exist(toRow, toColumn))
                return 21;

            return 42;
        }
    }
    else if (board->get_turn() == black)
    {
        // Pawn moves one square forward
        if (rowDiff == -1 && colDiff == 0) 
        {
            if (board->is_piece_exist(toRow, toColumn))
                return 21;

            return 42; 
        }
        // Pawn moves two squares forward from starting position
        else if (rowDiff == -2 && colDiff == 0 && fromRow == 6) 
        {
            if (board->is_piece_exist(toRow, toColumn) || board->is_piece_exist(toRow + 1, toColumn))
                return 21; 

            return 42;
        }
        // Pawn captures diagonally
        else if (rowDiff == -1 && std::abs(colDiff) == 1) 
        {
            if (!board->is_piece_exist(toRow, toColumn))
                return 21; 

            return 42;
        }
    }

    return 21;
}
