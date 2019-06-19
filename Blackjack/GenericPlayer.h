#pragma once
/* -------------------- */
/*    Autumn Arnold     */
/*    9/11/2017         */
/*    GenericPlayer.h   */
/* -------------------- */

#ifndef _GENERICPLAYER_H
#define _GENERICPLAYER_H

#include <iostream>
#include <string>
#include <vector>
#include "Hand.h"

using namespace std;

class GenericPlayer : public Hand {
	public:
		GenericPlayer(const string &name = "");

		virtual ~GenericPlayer();

		//Accessors
		void Bust() const;		//Announces that the generic player busts

		//Mutators
		virtual bool IsHitting() const = 0;		//indicates if generic player wants to keep hitting
		bool IsBusted() const;		//return whether generic player has busted - total greater than 21

	protected:
		string m_Name;

		friend ostream &operator <<(ostream &os, const GenericPlayer &aGenericPlayer);
};

#endif