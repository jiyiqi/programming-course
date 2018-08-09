#include <cstdlib>
#include <ctime>
#include "DeckOfCards.h" // DeckOfCards class definition
using namespace std;

DeckOfCards::DeckOfCards()// ®Ã∑”∂∂ß«ß‚µP©Ò§J•“™O
{
	currentCard = 0 ;
	for (int i = 0 ; i < 13 ; i ++)
	{
		for(int j = 0 ; j < 4 ; j ++)
		{
			Card card( i , j ) ;
			deck.push_back(card); 
			currentCard ++ ;
		}
	}
}
void DeckOfCards::shuffle()
{
	int index ;
	srand(time(0));
	for (int i = 0 ; i < 52 ; i ++)
	{
		index = rand()%52  ;
	    Card holder = deck[index] ;
		deck[index] = deck[i];
		deck[i] = holder ; 
	}
}
Card DeckOfCards::dealCard()
{
	Card temp = deck[currentCard - 1];
	currentCard-- ;
	return temp ;
}
bool DeckOfCards::moreCards() const
{
	if (currentCard == 0 )
	{
		return false ;
	}
	else 
	{
		return true ;
	}
}