#pragma once
/* -------------------- */
/*    Autumn Arnold     */
/*    9/11/2017         */
/*    Card.h            */
/* -------------------- */

#ifndef _CARD_H
#define _CARD_H

#include <iostream>
#include <string>

using namespace std;

class Card {
	public:
		enum rank { ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };
		enum suit { CLUBS, DIAMONDS, HEARTS, SPADES };

		Card(
			rank r = ACE,
			suit s = SPADES,
			bool ifu = true
		);

		//Accessors
		int GetValue() const;	//Returns the value of a card, 1-11

		//Mutators
		void Flip();	//Flips a card; if face up, becomes facedown and vice versa
				
		friend ostream& operator << (ostream &os, const Card &aCard);	//Overloading the << operator to use with Card Class

	private:
		rank m_Rank;
		suit m_Suit;
		bool m_IsFaceUp;

};

#endif