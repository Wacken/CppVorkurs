#pragma once
#include "Deck.h"

class Dealer
{
public:
	Deck deck;
	vector<Karte> hand;
public:
	Dealer();
	Dealer(Deck d);
	Karte deal();
};

