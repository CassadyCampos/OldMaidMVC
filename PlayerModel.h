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
		hand = {};
	};

	~Player() {};
	string getName();
	void addCard(Card card);
	vector<Card> getHand();
	void removeCardAt(int position);
	void addCardToHand(Card card);

private:
	string name;
	vector<Card> hand;
};

#endif // PLAYER_H
