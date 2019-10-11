#include <vector>
#include "DeckModel.h"
#include "PlayerModel.h"

#ifndef OLDMAIDMODEL_H
#define OLDMAIDMODEL_H

using namespace std;

class OldMaid
{
public:
	OldMaid() {
		deck = new Deck();
	};

	virtual ~OldMaid() {
		//delete deck;
		//deck = nullptr;
		//for (Player* player : players) {
		//	delete player;
		//	player = nullptr;
		//};
	};
	void addPlayer(string name);

	int getPlayersSize();
	Deck* getDeck();
	vector<Player*> getPlayers();
	vector<Player*> getWinners();

	void dealCards();
	Card takeCardFrom(Player* player, int cardPosition);
	void giveCardTo(Player* player, Card card);
	vector<vector<Card>> checkForPairs(Player* player);
	Player* checkForWinner();
	bool isGameComplete();

private:
	Deck* deck;
	vector<Player*> players;
	vector<Player*> winners;

};

#endif // OLDMAIDMODEL_H
