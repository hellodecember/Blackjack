#pragma once
/* -------------------- */
/*    Autumn Arnold     */
/*    9/11/2017         */
/*    Game.h            */
/* -------------------- */

#ifndef _GAME_H
#define _GAME_H

#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <vector>
#include "Deck.h"
#include "House.h"
#include "Player.h"

using namespace std;

class Game {
	public:
		Game(const vector<string> &names);

		~Game();

		//Accessors

		//Mutators
		void Play();	//Plays the game of Blackjack

	private:
		Deck m_Deck;
		House m_House;
		vector<Player> m_Players;
};

#endif