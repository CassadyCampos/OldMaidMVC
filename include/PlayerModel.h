/**
* @author Cassady Campos
* @date October 12 2019
*/
#include <vector>
#include "CardModel.h"

#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

/**
* @class Player, represents a player model.
*/
class Player
{
public:
	/** 
	* Constructor for a player object.
	* @param name, is the name for the player.
	* @return a player object.
	*/
	Player(string name) {
		this->name = name;
		hand = {};
	};

	~Player() {};
	/**
	* Function to get a players name.
	* @return the players name.
	*/
	string getName();
	/**
	*
	*/
	void addCard(Card card);
	/**
	* Function that retrieves the hand of the player.
	* @return Vector of cards that represents a players hand.
	*/
	vector<Card> getHand();
	/**
	* Function that removes a card from a players hand at a certain index.
	* @param position is the index to remove the card at
	*/
	void removeCardAt(int position);
	/**
	* Function that adds a card to a players hand.
	* @param card is the card to add.
	*/
	void addCardToHand(Card card);

private:
	string name;
	vector<Card> hand;
};

#endif // PLAYER_H
