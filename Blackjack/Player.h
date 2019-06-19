#pragma once
/* -------------------- */
/*    Autumn Arnold     */
/*    9/11/2017         */
/*    Player.h          */
/* -------------------- */

#ifndef _PLAYER_H
#define _PLAYER_H

#include <iostream>
#include <string>
#include "GenericPlayer.h"

using namespace std;

class Player : public GenericPlayer {
	public:
		Player(const string &name = "");

		virtual ~Player();

		//Accessors
		virtual bool IsHitting() const;		//returns whether or not the player wants another hit

		//Mutators
		void Win() const;		//Announces that the player wins
		void Lose() const;		//Announces that the player loses
		void Push() const;		//Announces that the player pushes
};

#endif