#include "Rook.h"


int Rook::move(std::string fromTo, Board* board)
{
	int fromRow = std::tolower(fromTo[0]) - 'a';
	int fromColumn = fromTo[1] - '1';

	int toRow = std::tolower(fromTo[2]) - 'a';
	int toColumn = fromTo[3] - '1';

	if (fromRow != toRow && fromColumn != toColumn)
		return 21;


	return 0;
}
