#pragma once
#include "Karte.h"
#include <vector>
#include "Deck.h"

bool cmdp(const Karte& card1, const Karte& card2);

class Player
{
public:
	Deck hand;
public:
	Player();
	void recieveCard(Karte card);
	void sortHand();
//	int countValue();
};

