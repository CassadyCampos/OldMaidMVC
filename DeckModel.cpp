#include "DeckModel.h"

Deck::Deck() {
	generateDeck();
}

void Deck::generateDeck() {
	string rank;
	string suite;

	for (string rankI : ranks) {
		for (string suiteI : suites) {
			cards.push_back(Card(rankI, suiteI));
			cout << "Rank: " << rankI << "    Suite: " << suiteI << endl;
		};
	};
};

vector<Card> Deck::getCards() {
	return cards;
};

void Deck::shuffleDeck() {
	unsigned seed = chrono::system_clock::now().time_since_epoch().count();
	shuffle(cards.begin(), cards.end(), default_random_engine(seed));
};
