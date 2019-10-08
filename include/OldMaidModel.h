#include <vector>
#include "DeckModel.h"
#include "PlayerModel.h"

#ifndef OLDMAIDMODEL_H
#define OLDMAIDMODEL_H

using namespace std;

class OldMaid
{
    public:
        OldMaid() {
            deck = new Deck();
        };

        virtual ~OldMaid() {
//            delete[] deck;
//            deck = nullptr;
        };
        void addPlayer(string name);

        int getPlayersSize();
        Deck* getDeck();
        vector<Player> getAllPlayers();

    private:
        Deck* deck;
        vector<Player> players;

};

#endif // OLDMAIDMODEL_H
