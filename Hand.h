#ifndef HAND_H
#define HAND_H

#include <vector>
#include "Card.h"
#include "CardDeck.h"

class Hand
{
public:
	Hand();
	void draw(CardDeck& deckToDraw);
	void printHandValue() const;
	void printHand() const;
private:
	vector<Card> myHand;
	int handValue;
	int cardInHand;
};
#endif // !HAND_H
