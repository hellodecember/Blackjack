#pragma once
/* -------------------- */
/*    Autumn Arnold     */
/*    9/11/2017         */
/*    Deck.h            */
/* -------------------- */

#ifndef _DECK_H
#define _DECK_H

#include <iostream>
#include <string>
#include <algorithm>
#include "Hand.h"
#include "GenericPlayer.h"

using namespace std;

class Deck : public Hand {
	public: 
		Deck();

		virtual ~Deck();

		//Mutators
		void Populate();	//Create a standard deck of 52 cards
		void Shuffle();		//Shuffle cards
		void Deal(Hand &aHand);		//Deal one card to a hand
		void AdditionalCards(GenericPlayer &aGenericPlayer);	//Give additional cards to a generic player
};

#endif