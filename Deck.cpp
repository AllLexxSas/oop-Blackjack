#include "Deck.h"
#include <algorithm>

void Deck::Populate()
{
	for (int i = suit::spades; i <= suit::hearts; i++)
	{
		for (int j =rank::ace; j <= rank::king; j++)
		{
		      Add( new Card(static_cast<suit> (i), static_cast<rank>(j)));
		}
	}
}

void Deck::Shuffle()
{
	std::random_shuffle(m_Cards.begin(), m_Cards.end());
}

void Deck::printDeck()
{
	if (!m_Cards.empty())
	{
		for (const Card * val : m_Cards)
		{
			std::cout << val;
		}
	}
}

void Deck::Deal(Hand &aHand)
{
	if (!m_Cards.empty())
	{
		aHand.Add(m_Cards.back());
		m_Cards.pop_back();
	}
	else
	{
		std::cout << "Out of cards. Unable to deal.";
	}
}

void Deck::AdditionalCards(GenericPlayer& aGenericPlayer)
{
	std::cout << std::endl;
	
	while (!(aGenericPlayer.IsBoosted()) && aGenericPlayer.IsHitting())
	{
		Deal(aGenericPlayer);
		aGenericPlayer.OpenCard();
		std::cout << aGenericPlayer << std::endl;

		if (aGenericPlayer.IsBoosted())
		{
			aGenericPlayer.Bust();
		}
	}
}


Deck::Deck()
{
	m_Cards.reserve(52);
}

Deck::~Deck()
{
}
