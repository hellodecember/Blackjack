/* -------------------- */
/*    Autumn Arnold     */
/*    9/11/2017         */
/*    Card.cpp          */
/* -------------------- */

#include "Card.h"

Card::Card(rank r, suit s, bool ifu) : m_Rank(r), m_Suit(s), m_IsFaceUp(ifu) {

}

int Card::GetValue() const {
	//If card is face down, its value is 0.
	int value = 0;
	if (m_IsFaceUp) {
		//value is number shown on card
		value = m_Rank;

		//value is 10 for face cards
		if (value > 10) {
			value = 10;
		}
	}

	return value;
}

void Card::Flip() {
	m_IsFaceUp = !(m_IsFaceUp);
}

//Overload the << operator so Card object can be sent to cout
ostream &operator <<(ostream &os, const Card &aCard) {
	const string RANKS[] = {"0", "A", "2", "3", "4", "5", "6", "7", "8",
							"9", "10", "J", "Q", "K"};
	const string SUITS[] = {"c", "d", "h", "s"};

	if (aCard.m_IsFaceUp) {
		os << RANKS[aCard.m_Rank] << SUITS[aCard.m_Suit];
	}
	else {
		os << "XX";
	}

	return os;
}