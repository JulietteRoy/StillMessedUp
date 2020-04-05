#include "Game.h"


namespace GameDev2D
{
	Game::Game() :
		m_Deck{},
		m_CardIndex(0)
	{
		Reset();
	}

	void Game::Update(double delta)
	{

	}

	void Game::Draw()
	{
		m_Deck[m_CardIndex].Draw();
	}

	void Game::Reset()
	{
		for (int i = 0; i < NUM_CARDS; i++)
		{
			m_Deck[i].SetIndex(i);
			m_Deck[i].Load();
		}
	}

	void Game::HandleLeftMouseClick(float mouseX, float mouseY)
	{
		m_CardIndex++;
		if (m_CardIndex >= NUM_CARDS)
		{
			m_CardIndex = 0;
		}
	}

	void Game::HandleRightMouseClick(float mouseX, float mouseY)
	{
		m_CardIndex--;
		if (m_CardIndex < 0)
		{
			m_CardIndex = NUM_CARDS - 1;
		}
	}

	void Game::HandleMouseMove(float mouseX, float mouseY, float previousX, float previousY)
	{

	}

	void Game::HandleKeyPress(Keyboard::Key key)
	{
		if (key == Keyboard::S)
		{
			m_CardIndex = 0;
			Shuffle(m_Deck, NUM_CARDS);
		}
		else if (key == Keyboard::R)
		{
			Reset();
		}
	}

	void Game::HandleKeyReleased(Keyboard::Key key)
	{

	}
	void Game::Shuffle(Card deck[], const int size)
	{
		for (int i = 0; i < size * 2; i++)
		{
			int indexA = Math::RandomInt(0, size - 1);
			int indexB = Math::RandomInt(0, size - 1);

			int cardIndexA = deck[indexA].GetIndex();
			deck[indexA].SetIndex(deck[indexB].GetIndex());
			deck[indexB].SetIndex(cardIndexA);

			deck[indexA].Load();
			deck[indexB].Load();
		}
	}
}