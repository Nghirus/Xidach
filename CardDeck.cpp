#include "CardDeck.h"

CardDeck::CardDeck()
{
	deck.reserve(NUMOFCARDS);
	cardInDeck = NUMOFCARDS;
	
	for (int count = 0; count < NUMOFCARDS; count++)
		deck.push_back(Card(FACE[count % 13], SUIT[count / 13], POINT[count % 13]));
	
}

Card CardDeck::dealTopCard()
{
	Card result;
	result = deck.back();
	deck.pop_back();
	cardInDeck--;
	
	return result;
}

void CardDeck::printDeck() const
{
	for (int count = 0; count < cardInDeck; count++)
		deck[count].printCard();
}

void CardDeck::shuffle()
{
	random_shuffle(deck.begin(), deck.end());
}

int myrandom(int i)
{
	return rand() % i; 
}