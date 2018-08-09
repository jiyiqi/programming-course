#include "Card.h"

const string Card::faceNames[totalFaces]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
const string Card::suitNames[totalSuits]={"ºìÌÒ","·½¿é","ºÚÌÒ","²İ»¨"};

Card::Card( int f, int s )
{
	face = f ;
	suit = s ;
}

string Card::toString() const
{
	return  suitNames[getSuit()]+faceNames[getFace()];
}