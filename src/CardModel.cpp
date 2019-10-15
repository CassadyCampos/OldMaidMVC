//#include "../include/CardModel.h"
#include <iostream>
#include "CardModel.h"

Card::Card(const string rankCard, const string suite) {
	this->rankCard = rankCard;
	this->suite = suite;
};

void Card::printCard() {
	cout << "Rank: " << rankCard << "  Suite: " << suite << endl;
};

const string Card::getRank() {
	return rankCard;
};

const string Card::getSuite() {
	return suite;
};