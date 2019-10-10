#include <string>

#ifndef CARD_MODEL
#define CARD_MODEL

using namespace std;

class Card
{


public:
	Card(const string rankCard, const string suite);
	void printCard();
	const string getRank();
	const string getSuite();
private:
	string rankCard;
	string suite;
};

#endif
