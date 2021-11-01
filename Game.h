#pragma once
#include "include.h"
class Game
{
private:
	House m_House;
	std::vector<Player> m_Players;
	Deck m_Deck;

public :
	~Game();
	Game(std::vector<std::string> &names);
	void Play();

};

