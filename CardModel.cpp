#include "cardModel.h"
#include <iostream>

Card::Card(const string rank, const string suite) {
	this->rank = rank;
	this->suite = suite;
};

void Card::printCard() {
	cout << "Rank: " << rank << "  Suite: " << suite << endl;
}; 