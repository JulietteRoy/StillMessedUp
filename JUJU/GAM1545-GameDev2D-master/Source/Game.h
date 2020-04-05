#pragma once

#include <GameDev2D.h>
#include "Card.h"
#include "Constants.h"


namespace GameDev2D
{
	//Class definition
	class Game
	{
	public:
		Game();  //Constructor

		//Write game logic in the Update method
		void Update(double delta);

		//Render game objects in the Draw method
		void Draw();

		void Reset();


		//Input methods
		void HandleLeftMouseClick(float mouseX, float mouseY);
		void HandleRightMouseClick(float mouseX, float mouseY);
		void HandleMouseMove(float mouseX, float mouseY, float previousX, float previousY);
		void HandleKeyPress(Keyboard::Key key);
		void HandleKeyReleased(Keyboard::Key key);

		void Shuffle(Card deck[], const int size);

	private:
		//Member variables GO HERE 
		Card m_Deck[NUM_CARDS];
		int m_CardIndex;
	};
}
