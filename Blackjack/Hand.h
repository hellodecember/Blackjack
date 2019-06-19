#pragma once
/* -------------------- */
/*    Autumn Arnold     */
/*    9/11/2017         */
/*    Hand.h            */
/* -------------------- */

#ifndef _HAND_H
#define _HAND_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Card.h"

using namespace std;

class Hand {
	public:
		Hand();

		virtual ~Hand();

		//Accessors
		int GetTotal() const;	//Gets hand total value, intelligently treats aces as 1 or 11

		//Mutators
		void Add(Card *pCard);	//Adds a card to the hand
		void Clear();			//Clears hand of all cards

	protected:
		vector<Card*> m_Cards;
};

#endif