#include "Player.h"
#include <algorithm>

Player::Player()
{
	this->hand = Deck();
}

void Player::recieveCard(Karte card)
{
	hand.deck.push_back(card);
}

void Player::sortHand()
{
	sort(hand.deck.begin(), hand.deck.end(), cmdp);
}

/*int Player::countValue()
{
	int t = 0;
	int ace = 0;
	for (Karte element : hand.deck)
	{
		if (t <= 21 && element.getValue(element.val) != 11)
		{
			t +=	element.getValue(element.val);
		}
		else if(element.getValue(element.val) == 11)
		{
			if(t <= 21)
			{
				t += 11;
				ace++;
			}
			else
			{
				t += 1;
			}
		}
		else
		{
			t += element.getValue(element.val);
		}
	}
	for (int i = 0; i < ace; i++)
	{
		if(t <= 21)
		{
			return t;
		}
		else
		{
			t -= 10;
		}
	}
	return t;
}*/

bool cmdp(const Karte& card1, const Karte& card2)
{
	return card1.val < card2.val;
}
