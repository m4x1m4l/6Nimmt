#include "SechsNimmtGame.h"
#include <sstream>
#include <iomanip>
using namespace std;


SechsNimmtGame::SechsNimmtGame() // standart-Konstruktor	
{
	//alle 104 Karten mit den passenden Hornochsen generieren in vector
	for (int i = 1; i < DECK_SIZE; i++)
	{
		deck[i] = Karte(i);
	}


}

void SechsNimmtGame::shuffle()
{
	random_shuffle(deck.begin(), deck.end());
}

void SechsNimmtGame::deal()
{
}

std::string SechsNimmtGame::toString()
{
	stringstream s;
	s << "Kartendeck:" << endl;
	
	for (int i = 1; i < DECK_SIZE; i++)
	{

		s << setw(3) <<deck[i].getNummer() << ":" << setw(4) 
			<< deck[i].getHornochsen() << endl;
	}
	return s.str();
}
