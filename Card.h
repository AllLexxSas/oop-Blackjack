#pragma once
#include<iostream>
#include<string>

enum suit
{
	spades, clubs, tambourines, hearts
};

enum rank {
	ace = 1,
	two  ,
	three,
	four ,
	five ,
	six ,
	seven,
	eight,
	nine,
	ten,
	jack,
	queen,
	king
};

class Card
{
private:
	suit m_Suit;
	rank m_Rank;
	bool m_IsFaceUp;

public:
	Card(suit s , rank r):m_Suit(s), m_Rank(r)
	{
		m_IsFaceUp = false;
	}

	int GetValue();
	void Flip();
	bool GetSideCart();
	void OpenCard();

	friend std::ostream& operator << (std::ostream &o, const Card* card);
	
};

