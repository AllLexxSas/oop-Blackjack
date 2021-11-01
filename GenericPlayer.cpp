#include "GenericPlayer.h"

GenericPlayer::GenericPlayer(const std::string & name):m_Name(name)
{
}

GenericPlayer::~GenericPlayer()
{
}

bool GenericPlayer::IsBoosted()const
{
	return (GetTotal() >21);
}

void GenericPlayer::OpenCard()
{
	for (auto *card : m_Cards)
	{
		card->OpenCard();
	}
}

void GenericPlayer::Bust() const
{
	std::cout << m_Name << " busts.\n";
}

std::ostream& operator << (std::ostream & o, const GenericPlayer &gp)
{
	o << gp.m_Name << ":\t";
	
	if (!gp.m_Cards.empty())
	{
		for (const Card* val : gp.m_Cards)
		{
			o << val << "\t";
		}

		if (gp.GetTotal() != 0)
		{
			o << "(" << gp.GetTotal() << ")" << "\n";
		}
	}
	return o;
}

