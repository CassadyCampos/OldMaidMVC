#include <iostream>
#include "OldMaidModel.h"
#ifndef OLDMAIDVIEW_H
#define OLDMAIDVIEW_H

using namespace std;

class OldMaidView {
public:
	OldMaidView() {};
	~OldMaidView() {};
	void oldMaidMenuView();
	void askForPlayersView();
	void askPlayerName();
	void playerStartTurnView(Player* player);
	void playerHandView(Player* player);
	void playerHandViewHidden(Player* player);
	void askForCardView();
	void playerPairsView(Player* player, vector<vector<Card>> pairs);
	void playerWinView(Player* player);
	void endResultsView(vector<Player*> winners, Player* loser);
protected:

private:
};

#endif // OLDMAIDVIEW_H
