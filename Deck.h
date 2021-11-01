#pragma once
//#include "include.h"
#include "Hand.h"
#include "GenericPlayer.h"

class Deck : public Hand
{
public:
	Deck();
	~Deck();
	void Populate();
	void printDeck();
	void Shuffle();
	void Deal(Hand&);
	void AdditionalCards(GenericPlayer& );

private:

};