#include "OldMaidModel.h"

void OldMaid::addPlayer(string name) {
	players.push_back(new Player(name));
};

int OldMaid::getPlayersSize() {
	return players.size();
};

Deck* OldMaid::getDeck() {
	return deck;
};

vector<Player*> OldMaid::getPlayers() {
	return players;
};

vector<Player*> OldMaid::getWinners() {
	return winners;
};

void OldMaid::dealCards() {
	int playerNum = 0;
	for (unsigned int i = getDeck()->getCards().size(); i > 0; i) {
		if (getDeck()->getCards().size() == 0) {
			return;
		};

		Card toAdd = getDeck()->takeTopCard();
		(players)[playerNum++]->addCard(toAdd);

		if (playerNum % players.size() == 0 && playerNum != 0) {
			playerNum = 0;
		};
	};
};

Card OldMaid::takeCardFrom(Player* player, int cardPosition) {
	Card cardTaken = player->getHand()[cardPosition - 1];

	player->removeCardAt(cardPosition - 1);
	return cardTaken;

};

void OldMaid::giveCardTo(Player* player, Card card) {
	player->addCardToHand(card);
};

vector<vector<Card>> OldMaid::checkForPairs(Player* player) {
	vector<vector<Card>> pairs;
	for (unsigned int i = 0; i < player->getHand().size() - 1; i++) {
		for (unsigned int j = i + 1; j < player->getHand().size(); j++) {
			if (player->getHand()[i].getRank() == player->getHand()[j].getRank()) {
				pairs.push_back(vector<Card>{player->getHand()[i], player->getHand()[j]});
				player->removeCardAt(j);
				player->removeCardAt(i);
				if (player->getHand().size() == 0) {
					return pairs;
				};
				break;
			};
		};
	};
	return pairs;
};

Player* OldMaid::checkForWinner() {
	for (unsigned int i = 0; i < getPlayers().size(); i++) {
		if (getPlayers()[i]->getHand().size() == 0) {
			winners.push_back(new Player(getPlayers()[i]->getName()));
			players.erase(players.begin() + i);
			return getWinners()[getWinners().size() - 1];
		};
	};

	return nullptr;
};

bool OldMaid::isGameComplete() {
	if (getPlayers().size() == 1) {
		return true;
	};
	return false;
};