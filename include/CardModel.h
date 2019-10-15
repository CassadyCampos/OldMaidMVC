/**
* @author Cassady Campos
* @date October 12 2019
*/
#include <string>

#ifndef CARD_MODEL
#define CARD_MODEL

using namespace std;

/**
* @class Card, represents 1 playing card.
*/
class Card
{
public:
	/**
	* Constructor for card object
	* @param rankCard is the rank of the card
	* @param suite is the suite of the card
	* @return a card object
	*/
	Card(const string rankCard, const string suite);

	/**
	* Function to print card details.
	*/
	void printCard();

	/**
	* Function to get the cards rank
	* @return the rank of a card
	*/
	const string getRank();

	/**
	* Function to get the cards suite
	* @return the suite of the card
	*/
	const string getSuite();
private:
	string rankCard;
	string suite;
};

#endif