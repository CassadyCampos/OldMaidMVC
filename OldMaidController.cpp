//#include "../include/OldMaidController.h"
#include "OldMaidController.h"

void OldMaidController::oldMaidGameLoop() {
	oldMaidMenu();

};


void OldMaidController::oldMaidMenu() {
	int input = 0;
	while (input < 1 || input > 3) {
		view.oldMaidMenuView();
		cin >> input;
	};
	switch (input) {
	case 1:
		initOldMaid();
		break;
	case 2:
		cout << "You will read the instructions of old maid\n";
		break;
	case 3:
		break;
	};
};

void OldMaidController::initOldMaid() {
	int numberOfPlayers;
	string playerName;

	view.askForPlayersView();
	cin >> numberOfPlayers;
	for (int i = 0; i < numberOfPlayers; i++) {
		view.askPlayerName();
		cin >> playerName;
		model.addPlayer(playerName);
	};
	cout << model.getPlayersSize();
	for (Player player : model.getAllPlayers()) {
		cout << player.getName() << endl;
	};
	shuffleAndDeal();
};

void OldMaidController::shuffleAndDeal() {
	model.getDeck()->shuffleDeck();
	for (Card c : model.getDeck()->getCards()) {
		c.printCard();
	};
};
