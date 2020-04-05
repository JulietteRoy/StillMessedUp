#pragma once

#include <GameDev2D.h>
#include <string>

namespace GameDev2D
{
	class Card
	{
	public:
		Card();

		void SetIndex(int index);
		int GetIndex();


		int GetSuit();
		int GetValue();

		void Load();
		void Draw();

	private:
		std::string GetFilename();

		Sprite m_Card;
		int m_Index;
	};
}
