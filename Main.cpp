#include <iostream>
#include <ctime>
#include "Card.h"
#include "CardDeck.h"
#include "Hand.h"
using namespace std;

int main()
{
	srand(time(0));

	CardDeck NewDeck;
	Hand newHand;

	NewDeck.shuffle();
	NewDeck.printDeck();

	newHand.draw(NewDeck);
	newHand.draw(NewDeck);
	newHand.draw(NewDeck);
	newHand.draw(NewDeck);

	cout << "\n My Hand" << endl;
	newHand.printHand();

	cout << "\n Remaining Deck" << endl;
	NewDeck.printDeck();
	cout << endl;
	
	cout << endl;
	system("pause");
	return 0;
}