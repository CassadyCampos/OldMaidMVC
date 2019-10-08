#include "OldMaidModel.h"

void OldMaid::addPlayer(string name) {
    players.push_back(Player(name));
};

int OldMaid::getPlayersSize() {
    return players.size();
};

vector<Card> OldMaid::getDeck() {
    return deck.getCards();
};

vector<Player> OldMaid::getAllPlayers() {
    return players;
};
