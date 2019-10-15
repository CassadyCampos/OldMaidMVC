/**
* @author Cassady Campos
* @date October 12 2019
*/
#include <vector>
#include "DeckModel.h"
#include "PlayerModel.h"

#ifndef OLDMAIDMODEL_H
#define OLDMAIDMODEL_H

using namespace std;

/**
* @class OldMaid, Model class.
*/
class OldMaid
{
public:
	/**
	* Constructor for OldMaid model object, creates new deck.
	*/
	OldMaid() {
		deck = new Deck();
	};

	virtual ~OldMaid() {
		//delete deck;
		//deck = nullptr;
		//for (Player* player : players) {
		//	delete player;
		//	player = nullptr;
		//};
	};
	/**
	* Function to add a player to the game.
	* @param name is the name of the player to be added.
	*/
	void addPlayer(string name);
	/**
	* Function to grab how many players in game.
	* @return the number of players.
	*/
	int getPlayersSize();
	/**
	* Function to grab the deck.
	* @return pointer to the deck.
	*/
	Deck* getDeck();
	/**
	* Function to grab the players.
	* @return the vector holding the players.
	*/
	vector<Player*> getPlayers();
	/**
	* Function to grab the players that have emptied their hand.
	* @return the vector holding the winners.
	*/
	vector<Player*> getWinners();
	/**
	* Function that deals cards out to the players.
	*/
	void dealCards();
	/**
	* Function that takes a card from a player.
	* @param player is the player to take from.
	* @param cardPosition is the index to take the card from.
	* @return the card object taken.
	*/
	Card takeCardFrom(Player* player, int cardPosition);
	/** 
	* Function that gives a card to a player.
	* @param player is the player to give to.
	* @param card is the card to give to the player.
	*/
	void giveCardTo(Player* player, Card card);
	/**
	* Function that checks for pairs in a players hand.
	* @param player is the players who's hand to check for pairs.
	* @return a vector of pairs of cards.
	*/
	vector<vector<Card>> checkForPairs(Player* player);
	/** 
	* Function to check if there are any players who have emptied their hand.
	* If such a player is found, they are switched to the winners vector.
	*/
	Player* checkForWinner();
	/**
	* Function to check if there is 1 player in the players vector. If there is
	* that person has the old maid.
	*/
	bool isGameComplete();

private:
	Deck* deck;
	vector<Player*> players;
	vector<Player*> winners;

};

#endif // OLDMAIDMODEL_H
