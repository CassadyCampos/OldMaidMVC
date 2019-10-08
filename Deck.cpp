#include "Deck.h"

Deck::Deck() {
	generateDeck();
}

void Deck::generateDeck() {
	string rank;
	string suite;
	
	for (string rankI : ranks) {
		for (string suiteI : suites) {
			cards.push_back(Card(rankI, suiteI));
		};
	};
};