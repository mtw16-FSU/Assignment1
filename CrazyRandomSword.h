/*
 * File: CrazyRandomSword.h
 * Author: Matthew Wix <mtw16@my.fsu.edu>
 *
 * Created on February 3rd, 2019
 */

#include <cstdlib>
#include "Weapon.h"
#include <string>

#ifndef CRAZYRANDOMSWORD_H_
#define CRAZYRANDOMSWORD_H_

/*
 * Defines a weapon called Crazy Random Sword with
 * hitpoints = random integer between 7 and 100,
 * ignores a randomly genertated amount of armor points
 * from 2 to a third of the armor's points
 */

class CrazyRandomSword : public Weapon{
public:
	//Calls weapon(name,hitpoints) constructor with values "Crazy Random Sword" and a default value of 1.0
	CrazyRandomSword() : Weapon("Crazy Random Sword", 1.0){
		srand(time(NULL));		//seeds the random number generator
		hitPoints = (rand() % 94) + 7;  //assigns a random value from 7 to 100 to hitpoints
	}

	virtual ~CrazyRandomSword(){}

	virtual double hit(double armor);
};

#endif
