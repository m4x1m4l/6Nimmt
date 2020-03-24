#include "SechsNimmtGame.h"


SechsNimmtGame::SechsNimmtGame() // standart-Konstruktor	
{
	//alle 104 Karten mit den passenden Hornochsen generieren in vector
	for (int i = 1; i < DECK_SIZE; i++)
	{
		deck[i] = Karte(i);
	}


}
