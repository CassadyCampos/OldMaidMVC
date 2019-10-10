#include "OldMaidModel.h"

void OldMaid::addPlayer(string name) {
	players.push_back(Player(name));
};

int OldMaid::getPlayersSize() {
	return players.size();
};

Deck* OldMaid::getDeck() {
	return deck;
};

vector<Player> OldMaid::getPlayers() {
	return players;
};

void OldMaid::dealCards() {
	int playerNum = 0;
	for (unsigned int i = getDeck()->getCards().size(); i > 0; i) {
		if (getDeck()->getCards().size() == 0) {
			return;
		};

		Card toAdd = getDeck()->takeTopCard();
		players[playerNum++].addCard(toAdd);

		if (playerNum % players.size() == 0 && playerNum != 0) {
			playerNum = 0;
		};
	};
};
