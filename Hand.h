#pragma once
//#include"include.h"
#include <vector>
#include <algorithm>
#include "Card.h"
#include <iostream>

class Hand
{
private:
	//std::vector <Card*> m_Cards;
protected:
	std::vector<Card *> m_Cards;

public:
	virtual ~Hand();
	Hand();
	void Add(Card* pCard);
	void Clear();
	int GetTotal()const;
	Card* operator[] (int);


};