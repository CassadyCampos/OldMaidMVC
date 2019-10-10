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
		//            delete[] deck;
		//            deck = nullptr;
	};
	void addPlayer(string name);

	int getPlayersSize();
	Deck* getDeck();
	vector<Player> getPlayers();

	void dealCards();
	Card takeCardFrom(Player player, int cardPosition);

private:
	Deck* deck;
	vector<Player> players;

};

#endif // OLDMAIDMODEL_H
