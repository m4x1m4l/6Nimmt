#pragma once
class Karte
{

private:
	unsigned int hornochsen;
	unsigned int nummer;

public:
	Karte(int nr);
	Karte();

	int getHornochsen()const;
	void setHornochsen();
	int getNummer()const;
};

