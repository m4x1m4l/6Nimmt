#pragma once
#include "Karte.h"
#include <cstddef>
#include <array>
#include <vector>




static const std::size_t DECK_SIZE{ 104 };

class SechsNimmtGame
{

public:
	SechsNimmtGame();
	std::string toString();
	void shuffle();
	void deal();
private:
	std::array<Karte, DECK_SIZE>deck;
	std::vector<Karte>player1;
	std::vector<Karte>player2;
	std::vector<Karte>player3;
	std::vector<Karte>player4;

};

