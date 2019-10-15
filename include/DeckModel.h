/**
* @author Cassady Campos
* @date October 12 2019
*/
#include <string>
#include <vector>
#include <iostream>
#include <algorithm> // shuffle
#include <random> // default_random_engine
#include <chrono> // chrono::system clock
#include "CardModel.h"

#ifndef DECK
#define DECK

using namespace std;

/**
* @class Deck, represents a collection of cards.
*/
class Deck
{
public:
	/**
	* Constructor for card object.
	*/
	Deck();
	~Deck() {};

	/**
	* @brief List of possible ranks.
	*/
	const string ranks[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	/**
	* @brief List of possible suites.
	*/
	const string suites[4] = { "Spades", "Hearts", "Clubs", "Diamonds" };
	/**
	* Function to generate a standard 52 card deck.
	*/
	void generateDeck();
	/**
	* Function to grab the cards.
	* @return Vector of card objects.
	*/
	vector<Card> getCards();
	/**
	* Function to shuffle around the cards
	*/
	void shuffleDeck();
	/**
	* Function to remove the first queen found in the deck.
	*/
	void removeQueen();
	/**
	* Function to take the top card off from the deck. Acts
	* as drawing a card.
	*/
	Card takeTopCard();
private:
	vector<Card> cards;
};

#endif