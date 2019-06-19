#pragma once
/* -------------------- */
/*    Autumn Arnold     */
/*    9/11/2017         */
/*    House.h           */
/* -------------------- */

#ifndef _HOUSE_H
#define _HOUSE_H

#include <iostream>
#include <string>
#include "GenericPlayer.h"

using namespace std;

class House : public GenericPlayer {
	public:
		House(const string &name = "House");

		virtual ~House();

		//Accessors
		virtual bool IsHitting() const;		//Indicates whether house is hitting - will always hit on 16 or less

		//Mutators
		void FlipFirstCard();
};

#endif