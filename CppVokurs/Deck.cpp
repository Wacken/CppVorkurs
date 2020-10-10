#include "Deck.h"

Deck::Deck()
{
	deck = reset();
	deck = shuffle(deck);
}

vector<Karte> Deck::reset()
{
	vector<Karte> deck;
	for (int j = 14; j < 18; j++)
	{
		for (int i = 2; i < 15; i++)
		{
			deck.push_back(Karte(static_cast<colour>(j), static_cast<value>(i)));
		}
	}
	return deck;
}

int Deck::size()
{
	cout << deck.size() << endl;
	return deck.size();
}

vector<Karte> Deck::shuffle(vector<Karte> d)
{
	random_shuffle(d.begin(), d.end());
	return d;
}

void Deck::order()
{
	sort(deck.begin(), deck.end(), cmd);
}

int Deck::getValue()
{
//	int t;
//	for (Karte card : deck)
//	{
//		t += card.getValue(card.val);
//	}
//	return t;
	int t = 0;
	int ace = 0;
	for (Karte element : deck)
	{
		if (t <= 21 && element.getValue(element.val) != 11)
		{
			t += element.getValue(element.val);
		}
		else if (element.getValue(element.val) == 11)
		{
			if (t <= 21)
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
		if (t <= 21)
		{
			return t;
		}
		else
		{
			t -= 10;
		}
	}
	return t;
}

bool cmd(const Karte& card1, const Karte& card2)
{
	return (card1.col*20 + card1.val*1) < (card2.col*20 + card2.val*1);
}

/*int Deck::getColour(vector<Karte> deck, colour col)
{
	int f = 0;
	for (Karte element : deck)
	{
		if(static_cast<int>(element.col) == static_cast<int>(col))
		{
			f++;
		}
	}
	return f;
}*/

string& toString(string& s, const vector<Karte>& deck)
{
	for (Karte karte : deck)
	{
		toString(s, karte);
		s.append("\n");
	}
	return s;
}

