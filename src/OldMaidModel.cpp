#include "OldMaidModel.h"

void OldMaid::addPlayer(string name) {
    players.push_back(Player(name));
};

int OldMaid::getPlayersSize() {
    return players.size();
};

Deck*OldMaid::getDeck() {
    return deck;
};

vector<Player> OldMaid::getAllPlayers() {
    return players;
};
