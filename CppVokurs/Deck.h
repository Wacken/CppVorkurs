#pragma once
#include <vector>
#include "Karte.h"
#include <algorithm>

using namespace std;

bool cmd(const Karte& card1, const Karte& card2);

class Deck
{
public:
	vector<Karte> deck;
public:
	Deck();
	vector<Karte> reset();
	int size();
	vector<Karte> shuffle(vector<Karte> deck);
	void order();
	int getValue();
//	int getColour(vector<Karte> deck, colour col);
};

string& toString(string& s, const vector<Karte>& deck);