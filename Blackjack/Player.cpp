/* -------------------- */
/*    Autumn Arnold     */
/*    9/11/2017         */
/*    Player.cpp        */
/* -------------------- */

#include "Player.h"

using namespace std;

Player::Player(const string &name) : GenericPlayer(name) {

}

Player::~Player() {

}

bool Player::IsHitting() const {
	char response;

	cout << m_Name << ", do you want a hit? (Y/N): ";
	cin >> response;
	return (response == 'y' || response == 'Y');
}

void Player::Win() const {
	cout << m_Name << " wins.\n";
}

void Player::Lose() const {
	cout << m_Name << " loses.\n";
}

void Player::Push() const {
	cout << m_Name << " pushes.\n";
}