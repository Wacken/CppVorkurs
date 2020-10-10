#include "Dealer.h"



Dealer::Dealer()
{
	this->deck = Deck();
	this->hand = vector<Karte>();
}

Dealer::Dealer(Deck d)
{
	this->deck = d;
	this->hand = vector<Karte>();
}

Karte Dealer::deal()
{
	if(deck.size() <= 0)
	{
		deck.reset();
		this->deal();
	}
	Karte k = deck.deck[deck.size()-1];
	deck.deck.pop_back();
	return k;
}
