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
		playerTurn(0);
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

	shuffleAndDeal();
};

void OldMaidController::shuffleAndDeal() {
	//model.getDeck()->shuffleDeck();
	model.getDeck()->removeQueen();
	model.dealCards();
};

void OldMaidController::playerTurn(int playerAt) {
	Player currentPlayer = model.getPlayers()[playerAt];
	if (playerAt == 0) {
		Player previousPlayer = model.getPlayers()[model.getPlayers().size() - 1];
		view.playerHandViewHidden(previousPlayer);
	} else {
		Player previousPlayer = model.getPlayers()[playerAt - 1];
		view.playerHandViewHidden(previousPlayer);
	};


};