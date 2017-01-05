#include "Card.h"

Card::Card()
{

}
Card::Card(const string& newFace, const string& newSuit, int newPoint)
{
	face = newFace;
	suit = newSuit;
	point = newPoint;
}

int Card::getValue() const
{
	return point;
}
void Card::printCard() const
{
	cout << face + " of " + suit << endl;
}