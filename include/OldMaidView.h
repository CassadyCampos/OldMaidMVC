/**
* @author Cassady Campos
* @date October 12 2019
*/
#include <iostream>
#include "OldMaidModel.h"
#ifndef OLDMAIDVIEW_H
#define OLDMAIDVIEW_H

using namespace std;

/**
* @class OldMaidView, holds all the views for the user.
*/
class OldMaidView {
public:
	/**
	* OldMaidView constructor
	*/
	OldMaidView() {};
	~OldMaidView() {};
	/**
	* Function that displays the main menu.
	* @return what action the user wants to do.
	*/
	int oldMaidMenuView();
	/**
	* Function that prints old maid instructions.
	*/
	void oldMaidInstructionsView();
	/**
	* Function that asks for many players are playing.
	@return the nunmber of players wanting to play.
	*/
	int askForPlayersView();
	/**
	* Function that asks for a players name.
	* @return the name the user inputted.
	*/
	string askPlayerName();
	/**
	* Function that displays the current players turn
	* @param player the players who turn it is.
	*/
	void playerStartTurnView(Player* player);
	/**
	* Function to display the users hands and cards.
	* @param player the players who's hand we are going to display.
	*/
	void playerHandView(Player* player);
	/**
	* Function to display the number of cards in the opposing players hand.
	*/ 
	void playerHandViewHidden(Player* player);
	/**
	* Function to prompt the user which card they would like to take.
	*/	
	int askForCardView();
	void playerPairsView(Player* player, vector<vector<Card>> pairs);
	/**
	* Function that displays a player has emptied their entire hand.
	*/
	void playerWinView(Player* player);
	/**
	* Function that displays the winners in order, and who has the old maid.
	*/
	void endResultsView(vector<Player*> winners, Player* loser);
private:
};

#endif // OLDMAIDVIEW_H
