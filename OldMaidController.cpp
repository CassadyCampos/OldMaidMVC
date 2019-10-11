//#include "../include/OldMaidController.h"
#include "OldMaidController.h"

void OldMaidController::oldMaidGameLoop() {
	oldMaidMenu();
};


void OldMaidController::oldMaidMenu() {
	int input = 0;
	int playerNumber = 0;
	while (input < 1 || input > 3) {
		view.oldMaidMenuView();
		cin >> input;
	};
	switch (input) {
	case 1:
		initOldMaid();
		do { 
			view.playerWinView(model.checkForWinner());
			//view.endResultsView(model.getWinners(), model.checkGameComplete());
			if (model.isGameComplete()) {
				view.endResultsView(model.getWinners(), model.getPlayers()[0]);
				return;
			};
			
			playerTurn(playerNumber);
			view.playerWinView(model.checkForWinner());

			if (playerNumber != 0 && playerNumber % (model.getPlayers().size() - 1) == 0) {
				playerNumber = 0;
			}
			else {
				playerNumber++;
			};
		} while (model.isGameComplete() == false);
		
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

	for (Player* player : model.getPlayers()) {
		vector<vector<Card>> pairs = model.checkForPairs(player);
		view.playerPairsView(player, pairs);
	};
};

void OldMaidController::shuffleAndDeal() {
	//model.getDeck()->shuffleDeck();
	model.getDeck()->removeQueen();
	model.dealCards();

};

void OldMaidController::playerTurn(int playerAt) {
	Player* currentPlayer = model.getPlayers()[playerAt];
	int cardPosition;

	view.playerStartTurnView(currentPlayer);
	if (playerAt == 0) {
		Player* previousPlayer = model.getPlayers()[model.getPlayers().size() - 1];
		view.playerHandViewHidden(previousPlayer);
		view.askForCardView();
		cin >> cardPosition;
		Card cardTaken = model.takeCardFrom(previousPlayer, cardPosition);
		model.giveCardTo(currentPlayer, cardTaken);

		vector<vector<Card>> pairs = model.checkForPairs(model.getPlayers()[playerAt]);
		view.playerPairsView(model.getPlayers()[playerAt], pairs);

		

	} else {
		Player* previousPlayer = model.getPlayers()[playerAt - 1];
		view.playerHandViewHidden(previousPlayer);
		view.askForCardView();
		cin >> cardPosition;
		Card cardTaken = model.takeCardFrom(previousPlayer, cardPosition);
 		model.giveCardTo(currentPlayer, cardTaken);

		vector<vector<Card>> pairs = model.checkForPairs(model.getPlayers()[playerAt]);
		view.playerPairsView(model.getPlayers()[playerAt], pairs);
		
	};


};