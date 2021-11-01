#include "Card.h"



void Card::Flip()
{
	m_IsFaceUp = !(m_IsFaceUp);
}

void Card::OpenCard()
{
	m_IsFaceUp = true;
}

int Card::GetValue()
{
	if (m_IsFaceUp)
	{
		return m_Rank;
	}
	return 0;
}

bool Card::GetSideCart()
{
	return m_IsFaceUp;
}

std::ostream& operator << (std::ostream &o, const Card *card)
{
	const std::string RANKS[] = { "0", "A", "2", "3", "4", "5", "6", "7", "8", "9","10", "J", "Q", "K" };
	const std::string SUITS[] = { "c", "d", "h", "s" };

	if (card->m_IsFaceUp)
		o << RANKS[card->m_Rank] << SUITS[card->m_Suit];
	else
		o << "XX";
	return o;
}

