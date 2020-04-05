#include "Card.h"
#include "Constants.h"

namespace GameDev2D
{
	Card::Card() :
		m_Card(),
		m_Index(0)
	{

	}

	void Card::SetIndex(int index)
	{
		m_Index = index;
	}

	int Card::GetIndex()
	{
		return m_Index;
	}

	int Card::GetSuit()
	{
		return m_Index / NUM_VALUES;
	}

	int Card::GetValue()
	{
		return m_Index % NUM_VALUES;
	}

	void Card::Load()
	{
		LoadTexture(GetFilename());
		m_Card.SetTexture(GetFilename());
	}

	void Card::Draw()
	{
		m_Card.Draw();
	}

	std::string Card::GetFilename()
	{
		std::string filename = "card";
		filename.append(SUIT_STRINGS[GetSuit()]);
		filename.append(VALUE_STRINGS[GetValue()]);
		return filename;
	}
}
