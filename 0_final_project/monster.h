
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /*--------------------------------****************************************----------------------------------
  |                                *                                      *                                 |
  |  Ether's Quest                 *        Monster class Declaration     *                                 |
  |                                *                                      *                                 |
  ---------------------------------****************************************----------------------------------*/
  //////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*

  The Monster class create objects with the states:
  string name, int health, int armor, and int strength
 

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef MONSTER_H
#define MONSTER_H

	#ifdef _MSC_VER
		#pragma once
	#endif  // _MSC_VER

#include <string>
using namespace std;


	/*/////////////////////////
	--------------------------
	|          Class         |
	--------------------------
	////////////////////////*/

class Monster {

		/*////////////////////////
		--------------------------
		|       Variables        |
		--------------------------
		////////////////////////*/


	string name = "No Monster";
	int health = 0;
	int armor = 0;
	int strength = 0;


public:

		/*////////////////////////
		--------------------------
		|      Constructors      |
		--------------------------
		////////////////////////*/

	Monster();

	Monster(string name, int health, int armore, int strength);

		/*////////////////////////
		--------------------------
		|       Accessors        |
		--------------------------
		////////////////////////*/

	string get_name();

	int get_health();

	int get_armor();

	int get_strength();

		/*////////////////////////
		--------------------------
		|        Mutators        |
		--------------------------
		////////////////////////*/

	void set_name(string name);

	void set_health(int health);

	void set_armore(int armore);

	void set_strength(int strength);

};
#endif