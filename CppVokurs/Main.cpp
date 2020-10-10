#pragma once

#include "Karte.h"
#include "Deck.h"
#include "Dealer.h"
#include "Player.h"

using namespace std;

void main()
{
	Deck deck;
	Dealer dealer(deck);
	Player player1;
	player1.recieveCard(dealer.deal());
	player1.recieveCard(dealer.deal());
	dealer.hand.push_back(dealer.deal());
	char b;
	while (true)
	{
		cout << "Noche ine Karte oder keine Karte (Y/N)" << endl;
		cin >> b;
		if (b == 'y' || b == 'Y')
		{
			player1.recieveCard(dealer.deal());
		}
		else if (b == 'n' || b == 'N')
		{
			break;
		}
		cout << player1.hand.getValue();
	}
	while (dealer.deck.getValue()< 17)
	{
		dealer.hand.push_back(dealer.deal());
	}
	if (dealer.deck.getValue() < player1.hand.getValue())
	{
		cout << "Player Wins" << endl;
	}
	else
	{
		cout << "Bank Wins" << endl;
	}
}
