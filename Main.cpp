#include <iostream>
#include <ctime>
#include "Card.h"
#include "CardDeck.h"
#include "Hand.h"
using namespace std;

void displayMenu(Hand& playingHand);
void processChoice(Hand& playingHand, CardDeck& playingDeck);

int main()
{
	srand(time(0));

	CardDeck NewDeck;
	Hand NewHand;

	NewDeck.shuffle();
	NewHand.draw(NewDeck);
	NewHand.draw(NewDeck);
	displayMenu(NewHand);
	processChoice(NewHand, NewDeck);

	
	cout << endl;
	system("pause");
	return 0;
}

void displayMenu(Hand& playingHand)
{
	cout << "\n*** XIDACH ***\n";
	cout << "\nSelect one of the following:\n\n";
	cout << " Your Cards: " << endl;
	playingHand.printHand();
	playingHand.printHandValue();
	cout << endl << endl;
	cout << "    1: HIT" << endl;
	cout << "    2: STAY" << endl;

	cout << "    7: Exit" << endl;
}

void processChoice(Hand &playingHand, CardDeck& playingDeck)
{
	int choice = 0;
	cout << "\nEnter your choice: ";
	cin >> choice;
	cout << endl;

	while (choice != 7)
	{
		switch (choice)
		{
		case 1:
			cout << "Dealing Card. . ." << endl;
			playingHand.draw(playingDeck);

			break;

		case 2:
			cout << "Cool";

			break;

		default:
			cout << "Invalid Selection" << endl;

			break;
		}
		system("Pause");
		system("CLS");
		displayMenu(playingHand);

		cout << "\nEnter your choice: ";
		cin >> choice;
		cout << endl;
	}
}