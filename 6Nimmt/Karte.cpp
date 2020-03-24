#include "Karte.h"

Karte::Karte(int nr)
{
	
	nummer = nr;
	setHornochsen();
}

Karte::Karte()
{
	nummer = 0;
	hornochsen = 0;
}

int Karte::getHornochsen() const
{
	return hornochsen;
}

void Karte::setHornochsen()
{
	//immer ein Ochse setzen
	hornochsen = 0;
	//bei durch 10 teilbar - 3 Ochsen
	if ((getNummer() % 10) == 0) {
		hornochsen = 3;
	}
	else if ((getNummer() % 11) == 0) // durch 11 teilbar - 5
	{
		hornochsen = 5;
		if (getNummer() == 55)
		{
			hornochsen = 7;
		}
	}
	else if (((getNummer() % 5) == 0) && ((getNummer() % 10) != 0))
	{
		//5 am ende - durch 5 teilbar aber 10 ausgeschlossen
		hornochsen = 2;
	}
	
	else
	{ 
		//sonst immer 1 Hornochse
		hornochsen = 1;
	}
}

int Karte::getNummer() const
{
	return nummer;
}

bool Karte::operator<(const Karte& k) const
{
	if (nummer < k.getNummer())
	{
		return true;
	}
	else if (nummer > k.getNummer())
	{
		return false;
	}
	
}
