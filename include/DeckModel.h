#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include "CardModel.h"

#ifndef DECK
#define DECK

using namespace std;

class Deck
{
	public:
		Deck();
        ~Deck() {};

		const string ranks[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
		const string suites[4] = { "Spades", "Hearts", "Clubs", "Diamonds" };
		vector<Card> getCards();
		void generateDeck();
		void shuffle();
//        protected:
		vector<Card> cards;
};

#endif
