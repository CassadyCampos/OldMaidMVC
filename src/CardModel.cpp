#include "../include/CardModel.h"
#include <iostream>

Card::Card(const string rankCard, const string suite) {
	this->rankCard = rankCard;
	this->suite = suite;
};

void Card::printCard() {
	cout << "Rank: " << rankCard << "  Suite: " << suite << endl;
};
