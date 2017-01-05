#ifndef CARDDECK_H
#define CARDDECK_H

#include <vector>
#include <algorithm>
#include "Card.h"


const string SUIT[] = { "Heart", "Diamond", "Spade", "Club" };
const string FACE[] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
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