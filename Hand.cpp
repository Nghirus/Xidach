#include "Hand.h"

Hand::Hand()
{
	cardInHand = 0;
}

void Hand::draw(CardDeck& deck)
{
	myHand.push_back(deck.dealTopCard());
	cardInHand++;
}

void Hand::printHand() const
{
	for (int i = 0; i < cardInHand; i++)
		myHand[i].printCard();
}