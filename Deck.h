#pragma once
#include <string>
#include <vector>
#ifndef DECK
#define DECK
#include "cardModel.h"
using namespace std;

class Deck
{
	public:
		Deck();
		
		
		const string ranks[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q,", "K" };
		const string suites[4] = { "Spades", "Hearts", "Clubs", "Diamonds" };
		void generateDeck();
	private: 
		vector<Card> cards;
};

#endif
