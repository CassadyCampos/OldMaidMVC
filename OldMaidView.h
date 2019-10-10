#include <iostream>
#include "OldMaidModel.h"
#ifndef OLDMAIDVIEW_H
#define OLDMAIDVIEW_H

using namespace std;

class OldMaidView {
public:
	OldMaidView() {};
	~OldMaidView() {};
	void oldMaidMenuView();
	void askForPlayersView();
	void askPlayerName();
	void playerHandView(Player player);
	void playerHandViewHidden(Player player);
protected:

private:
};

#endif // OLDMAIDVIEW_H
