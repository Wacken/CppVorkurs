#include "Karte.h"

#include <string>

Karte::Karte(colour col, value val)
{
	this->col = col;
	this->val = val;
	numb = getValue(val);
}

Karte::Karte()
{
	this->col = Spades;
	this->val = Ten;
}

int Karte::getValue(value val)
{
	if(val <= 10)
	{
		return val;
	}
	else if(val == 14)
	{
		return 11;
	}
	else
	{
		return 10;
	}
}

void Karte::toString()
{
	cout << this;
}

ostream& operator<<(ostream& s, const Karte& karte)
{
	s << karte.col << " " << karte.val;
	return s;
}

string& toString(string& s, const Karte& karte)
{
	toString(s ,karte.col);
	s.append(" ");
	toString(s, karte.val);
	return s;
}

string& toString(string& s, const value& value)
{
	int n = static_cast<int>(value); 
	if (n < 10)
	{
		char c[] = { static_cast<char>(48 + n), '\0' };
		s.append(c);
	}
	else
	{
		switch(value)
		{
		case Ten:
			s.append("10");
			break;
		case Jack:
			s.append("Jack");
			break;
		case Queen:
			s.append("Queen");
			break;
		case King:
			s.append("King");
			break;
		case Ace:
			s.append("Ace");
			break;
		}
	}
	return s;
}

string& toString(string& s, const colour& c)
{
	switch (static_cast<colour> (c))
	{
	case Spades:
		s.append("Spades");
		break;
	case Hearts:
		s.append("Hearts");
		break;
	case Diamonds:
		s.append("Diamonds");
		break;
	case Clubs:
		s.append("Clubs");
		break;
	}
	return s;
}


