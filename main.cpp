#include <iostream>
#include "DeckModel.h"
#include "OldMaidController.h"
#include "OldMaidModel.h"
#include "OldMaidView.h"
#include "DeckModel.h"

using namespace std;

int main()
{
    OldMaid model;
    OldMaidView view;
    OldMaidController controller(model, view);
    controller.oldMaidGameLoop();
//    Deck deck;
//    for (Card c : deck.getCards()) {
//        c.printCard();
//    }
//    deck.shuffle();
//    for (Card c : deck.getCards()) {
//        c.printCard();
//    };
	return 0;
};
