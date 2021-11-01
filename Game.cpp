#include "Game.h"


Game::~Game()
{
}

Game::Game(std::vector<std::string> &names)
{
	for (const auto& val : names)
	{
		m_Players.push_back( Player(val));
	}
	m_Deck.Populate();
	m_Deck.Shuffle();
}

void Game::Play()
{
	for (auto &player : m_Players)
	{
		m_Deck.Deal(player);
		m_Deck.Deal(player);

		player.OpenCard();

	}
		m_Deck.Deal(m_House);
		m_Deck.Deal(m_House);

		m_House.OpenCard();

	for (auto &player : m_Players)
	{
		std::cout << player << std::endl;
	}

	std::cout << m_House <<  std::endl;

	for (auto &player : m_Players)
	{
		//player.IsHitting();
		m_Deck.AdditionalCards(player);
	}

	for (auto &player : m_Players)
	{
		std::cout << player << std::endl;
	}

	std::cout << m_House << std::endl;
}



