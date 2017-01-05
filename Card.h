#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>

using namespace std;

class Card
{
public:
	Card();
	Card(const string& newFace, const string& newSuit, int newPoint);
	int getValue() const;
	void printCard() const;
private:
	string face;
	string suit;
	int point;
};
#endif // CARD_H