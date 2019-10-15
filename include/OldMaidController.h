/**
* @author Cassady Campos
* @date October 12 2019
*/
#include <vector>
#include <algorithm>
#include "OldMaidView.h"
#include "OldMaidModel.h"

#ifndef OLDMAIDCONTROLLER_H
#define OLDMAIDCONTROLLER_H

using namespace std;

/**
* @class OldMaidController, controls the model 
*/
class OldMaidController
{
public:
	/**
	* Constructor for OldMaidController
	* @param OldMaid is the model
	* @param OldMaidView is the view
	* @return a OldMaidController object
	*/
	OldMaidController(const OldMaid model, const OldMaidView view) {
		this->setModel(model);
		this->setView(view);
	};
	~OldMaidController() {};

	/**
	* Function to set the model passed in as parameter
	*/
	void setModel(const OldMaid model) {
		this->model = model;
		this->model.getDeck()->generateDeck();
	};
	/**
	* Function to set the view passed in as parameter
	*/
	void setView(const OldMaidView view) {
		this->view = view;
	};
	/**
	* Function to retrieve the view
	* @return the view object
	*/
	OldMaidView getview() {
		return view;
	};
	/**
	* Function to perform the loop of the game.
	*/
	void oldMaidGameLoop();
	/**
	* Function that allows user to play, view how to play, or simply exit.
	*/
	void oldMaidMenu();
	/**
	* Function to initialize old maid, shuffles, deals and removes one queen.
	*/
	void initOldMaid();
	/**
	* Function that shuffles and deals out the cards to the players.
	*/
	void shuffleAndDeal();
	/**
	* Function that completes a players turn.
	* @param playerAt is the player index.
	*/
	void playerTurn(int playerAt);

private:
	OldMaid model;
	OldMaidView view;
};

#endif // OLDMAIDCONTROLLER_H
