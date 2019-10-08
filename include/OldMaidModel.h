#include <vector>
#include "DeckModel.h"
#include "PlayerModel.h"

#ifndef OLDMAIDMODEL_H
#define OLDMAIDMODEL_H

using namespace std;

class OldMaid
{
    public:
        OldMaid(Deck deck) {
            this->setDeck(deck);
        };

        virtual ~OldMaid() {};
        void addPlayer(string name);

        void setDeck(Deck deck) {
            deck = deck;
        };

        int getPlayersSize();
        vector<Card> getDeck();
        vector<Player> getAllPlayers();

    private:
        Deck deck;
        vector<Player> players;

};

#endif // OLDMAIDMODEL_H
