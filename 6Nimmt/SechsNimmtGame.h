#pragma once
#include "Karte.h"
#include <cstddef>
#include <array>




static const std::size_t DECK_SIZE{ 105 };
static const std::size_t PLAYER_SIZE{ 10 };

class SechsNimmtGame
{

public:
	SechsNimmtGame();
private:
	std::array<Karte, DECK_SIZE>deck;
	std::array<Karte, PLAYER_SIZE>player1;
	std::array <Karte, PLAYER_SIZE > player2;
	std::array<Karte, PLAYER_SIZE>player3;
};

