// #include "../include/OldMaidView.h"
#include "OldMaidView.h"

void OldMaidView::oldMaidMenuView() {
	cout << "Welcome to Old Maid!\n";
	cout << "1. Play \n2. How To Play \n3. Exit \n";\
};

void OldMaidView::askForPlayersView() {
	cout << "How many people are playing? (2-4) ";
};

void OldMaidView::askPlayerName() {
	cout << "Enter player name: ";
};

void OldMaidView::playerStartTurnView(Player* player) {
	cout << "\nIt's " << player->getName() << "'s turn!\n";
};

void OldMaidView::playerHandView(Player* player) {
	cout << player->getName() << "Hand:\n";
	for (Card c : player->getHand()) {
		c.printCard();
	};
	cout << endl;
};

void OldMaidView::playerHandViewHidden(Player* player) {
	cout << player->getName() << "'s hand has " << player->getHand().size() << " cards" << endl;
	for (Card c : player->getHand()) {
		cout << "* ";
	};
	//cout << "\nSelect which card position you wish to take.";
};

void OldMaidView::askForCardView() {
	cout << "\nSelect which card position you wish to take: ";
};

void OldMaidView::playerPairsView(Player* player, vector<vector<Card>> pairs) {
	cout << "\n" << player->getName() << " has scored pair(s) of:\n";
	for (vector<Card> pair : pairs) {
		cout << "Pair of " << pair[0].getRank() << "'s!\n";
	};
};
 
void OldMaidView::playerWinView(Player* player) {
	if (player == nullptr) {
		return;
	};
	cout << "\n" << player->getName() << " has emptied their hand!\n";
};

void OldMaidView::endResultsView(vector<Player*> winners, Player* loser) {
	if (loser == nullptr) {
		return;
	};
	cout << "\nGame Finished!\nResults:\n";
	cout << loser->getName() << " has the Old Maid!\nWinners:\n";

	for (unsigned int i = 0; i < winners.size(); i++) {
		cout << i + 1 << ". " << winners[i]->getName() << endl;
	};
};