#include "SechsNimmtGame.h"
#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(static_cast<unsigned int>(time(nullptr)));
	cout <<"test";
	SechsNimmtGame s;
	cout << s.toString();
	s.shuffle();
	cout << "\n\n" << s.toString();
	
	return 0;

}