#include "Card.h"

Card::Card()
{

}
Card::Card(const string& newFace, const string& newSuit)
{
	face = newFace;
	suit = newSuit;
}

void Card::printCard() const
{
	cout << face + " of " + suit << endl;
}