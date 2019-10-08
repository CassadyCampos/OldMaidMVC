#include <vector>
#include "CardModel.h"

#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player
{
    public:
        Player(string name) {
            this->name = name;
        };

        ~Player() {};
        string getName() {
            return name;
        };
    private:
        string name;
        vector<Card> hand;
};

#endif // PLAYER_H
