#pragma once
#include <iostream>
#include <string>

using namespace std;

enum colour
{
	Spades = 14,
	Hearts,
	Diamonds,
	Clubs
};

enum value
{
	Two = 2,
	Three,
	Four,
	Five,
	Six,
	Seven,
	Eight,
	Nine,
	Ten,
	Jack,
	Queen, 
	King, 
	Ace
};

class Karte
{
public:
	colour col;
	value val;
	int numb;
public:
	Karte(colour col, value val);
	Karte();
	int getValue(value val);
	void toString();
};
 
ostream& operator<< (ostream& s, const Karte& karte);
string& toString(string& s, const Karte& karte);
string& toString(string& s, const value& value);
string& toString(string& s, const colour& c);
