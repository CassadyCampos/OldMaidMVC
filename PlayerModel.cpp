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

void Player::removeCardAt(int position) {
	hand.erase(hand.begin() + position);
};

void Player::addCardToHand(Card card) {
	hand.push_back(card);
};