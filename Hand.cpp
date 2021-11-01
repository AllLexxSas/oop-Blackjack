#include"Hand.h"


void Hand::Add(Card * card)
{
	m_Cards.push_back(card);
}

Hand::Hand()
{
	m_Cards.reserve(7);
}

Hand::~Hand()
{
	Clear();
}

int Hand::GetTotal()const
{
	int res = 0;
	std::vector<Card*> temp(m_Cards);

	std::sort(temp.begin(), temp.end(), [](Card *a, Card *b)
		{return (a->GetValue() > b->GetValue()); });

	for (const auto &a : m_Cards)
	{
			int t = a->GetValue();
			if (t == 1)
			{
				if ((res + 11) > 21)
					res += 1;
				else
					res += 11;
			}
			else
			{
				if (t > 10)
					res += 10;
				else
					res += t;
			}
}
	return res;
}

void Hand::Clear()
{
	for (auto &val : m_Cards)
	{
		delete val;
	}
	m_Cards.clear();
}

Card* Hand::operator[] (int i)
{
	return m_Cards[i];
}