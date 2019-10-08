#pragma once
#include <string>

#ifndef CARD
#define CARD

using namespace std;



class Card
{


public:
	Card(const string rank, const string suite);
	const string ranks[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q,", "K" };
	const string suites[4] = { "Spades", "Hearts", "Clubs", "Diamonds" };
	void printCard();
private:
	string rank;
	string suite;
};

#endif
