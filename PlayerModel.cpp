//#include "../include/PlayerModel.h"
#include "PlayerModel.h"

string Player::getName() {
	return name;
};

vector<Card> Player::getHand() {
	return hand;
};

void Player::addCard(Card c) {
	hand.push_back(c);
};