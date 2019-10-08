#include "OldMaidView.h"

int iGameView::askPlayersView() {
	int numberOfPlayers;
	cout << "How many players would you like?\n 1\n 2\n 3\n 4\n";
	cin >> numberOfPlayers;

	return numberOfPlayers;
};