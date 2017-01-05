#include "Hand.h"

Hand::Hand()
{
	handValue = 0;
	cardInHand = 0;
}

void Hand::draw(CardDeck& deck)
{
	myHand.push_back(deck.dealTopCard());

	if (myHand.back().getValue() == 11 && handValue > 12)
		handValue += 1;
	else if (myHand.back().getValue() == 11 && handValue == 11)
		handValue += 10;
	else
		handValue += myHand.back().getValue();

	cardInHand++;
}

void Hand::printHandValue() const
{
	cout << "Hand Value: " << handValue;
}
void Hand::printHand() const
{
	if (cardInHand == 0)
		cout << "Hand is Empty " << endl;
	else
	{
		for (int i = 0; i < cardInHand; i++)
			myHand[i].printCard();
	}
}