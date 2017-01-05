#include <iostream>
#include <ctime>
#include "Card.h"
#include "CardDeck.h"

using namespace std;

int main()
{
	srand(time(0));

	CardDeck NewDeck;
	NewDeck.shuffle();
	NewDeck.printDeck();

	cout << endl;
	system("pause");
	return 0;
}