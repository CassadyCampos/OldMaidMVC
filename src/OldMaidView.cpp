// #include "../include/OldMaidView.h"
//#include "OldMaidView.h"
#include "../include/OldMaidView.h"

int OldMaidView::oldMaidMenuView() {
    int result;
    cout << "Welcome to Old Maid!\n";
    cout << "1. Play \n2. How To Play \n3. Exit \n";\
    cin >> result;
    return result;
};

void OldMaidView::oldMaidInstructionsView() {
    cout << "Old Maid is a constant favorite with children and lots of fun for families playing cards together.\n Colorful decks made especially for the game are popular, but regardless of the playing cards used, the rules are the same." << endl << "The goal is to form and discard pairs of cards, and not to be left with the odd card (a queen) at the end.\n";
};

int OldMaidView::askForPlayersView() {
    int numOfPlayers;
    cout << "How many people are playing? (2-4) ";
    cin >> numOfPlayers;
    return numOfPlayers;
};

string OldMaidView::askPlayerName() {
    string name;
    cout << "Enter player name: ";
    cin >> name;
    return name;
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
};

int OldMaidView::askForCardView() {
    int position;
    cout << "\nSelect which card position you wish to take: ";
    cin >> position;
    return position;
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
