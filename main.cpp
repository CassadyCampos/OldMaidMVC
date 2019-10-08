#include <iostream>
#include "DeckModel.h"
#include "OldMaidController.h"
#include "OldMaidModel.h"
#include "OldMaidView.h"
#include "DeckModel.h"

using namespace std;

int main()
{
    Deck deck;
    OldMaid model(deck);
    OldMaidView view;
    OldMaidController controller(model, view);
    controller.oldMaidGameLoop();




	return 0;
};
