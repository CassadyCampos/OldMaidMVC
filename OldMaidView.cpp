// #include "../include/OldMaidView.h"
#include "OldMaidView.h"

void OldMaidView::oldMaidMenuView() {
	cout << "Welcome to Old Maid!" << endl;
	cout << "1. Play \n2. How To Play \n3. Exit \n";\
};

void OldMaidView::askForPlayersView() {
	cout << "How many people are playing? (2-4) ";
};

void OldMaidView::askPlayerName() {
	cout << "Enter player name: ";
};

void OldMaidView::playerHandView(Player player) {
	cout << player.getName() << "Hand:\n";
	for (Card c : player.getHand()) {
		c.printCard();
	};
	cout << endl;
};

void OldMaidView::playerHandViewHidden(Player player) {
	cout << player.getName() << "'s hand has " << player.getHand().size() << " cards" << endl;
	for (Card c : player.getHand()) {
		cout << "* ";
	};
	//cout << "\nSelect which card position you wish to take.";
};