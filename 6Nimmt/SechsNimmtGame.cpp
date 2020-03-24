#include "SechsNimmtGame.h"
#include <sstream>
#include <iomanip>
using namespace std;


SechsNimmtGame::SechsNimmtGame() // standart-Konstruktor	
{
	//alle 104 Karten mit den passenden Hornochsen generieren in vector
	for (int i = 0; i < DECK_SIZE; i++)
	{
		deck[i] = Karte(i+1);
	}


}

//mischt die Karten
void SechsNimmtGame::shuffle()
{
	random_shuffle(deck.begin(), deck.end());
}
//teilt jedem Spieler 10 Karten zu
void SechsNimmtGame::deal()
{
	for (int i = 0; i < 40 ; i++)
	{
		player1.push_back(deck[i]);
		i++;
		player2.push_back(deck[i]);
		i++;
		player3.push_back(deck[i]);
		i++;
		player4.push_back(deck[i]);
		i++;	
	}
}

std::string SechsNimmtGame::toString()
{
	stringstream s;
	s << "Kartendeck:" << endl;
	
	for (int i = 0; i < DECK_SIZE; i++)
	{

		s << setw(3) <<deck[i].getNummer() << ":" << setw(4) 
			<< deck[i].getHornochsen() << endl;
	}
	
	s << "\nSpieler1:" << endl;
	for (int i = 0; i < player1.size(); i++)
	{
		s << setw(3) << player1.at(i).getNummer()<< ":" << setw(4)
			<< player1.at(i).getHornochsen() << endl;
	}
	s << "\nSpieler2:" << endl;
	for (int i = 0; i < player2.size(); i++)
	{
		s << setw(3) << player2.at(i).getNummer() << ":" << setw(4)
			<< player2.at(i).getHornochsen() << endl;
	}
	s << "\nSpieler3:" << endl;
	for (int i = 0; i < player3.size(); i++)
	{
		s << setw(3) << player3.at(i).getNummer() << ":" << setw(4)
			<< player3.at(i).getHornochsen() << endl;
	}
	s << "\nSpieler4:" << endl;
	for (int i = 0; i < player4.size(); i++)
	{
		s << setw(3) << player4.at(i).getNummer() << ":" << setw(4)
			<< player4.at(i).getHornochsen() << endl;
	}
	return s.str();
}
