#ifndef CARDDECK_H
#define CARDDECK_H

#include <vector>
#include <algorithm>
#include "Card.h"


const string SUIT[4] = { "Heart", "Diamond", "Spade", "Club" };
const string FACE[13] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
const int VALUE[13] = { 11,2,3,4,5,6,7,8,9,10,10,10,10 };
const int NUMOFCARDS = 52;

class CardDeck
{
public:
	CardDeck();
	void shuffle();
	Card dealTopCard();
	void printDeck() const;
private:
	vector<Card> deck;
	int cardInDeck;
};

int myrandom(int i);
#endif // !CARDDECK_H