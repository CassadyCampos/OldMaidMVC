#include <string>

#ifndef CARD_MODEL
#define CARD_MODEL

using namespace std;

class Card
{


public:
	Card(const string rankCard, const string suite);
	void printCard();
private:
	string rankCard;
	string suite;
};

#endif
