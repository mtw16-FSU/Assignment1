/*
 * File: CrazyRandomSword.cpp
 * Author: Matthew Wix <mtw16@my.fsu.edu>
 *
 * Created on February 3rd, 2019
 */

#include "CrazyRandomSword.h"
#include <cmath>

double CrazyRandomSword::hit(double armor){
	srand(time(NULL));		//seeds the random number generator
	hitPoints = (rand() % 94) + 7;  //randomizes the amount of hitpoints to a value between 7 and 100
	
	//randomly selects a value between 2 and 1/3 of the armor points to be ignored in the damage calculation
	int pointsIgnored = (rand() % (int) (floor(armor/3)-1)) + 2;
	
	double damage = hitPoints - (armor - pointsIgnored);

	//if damage is less than armor - points ignored, sets it equal to 0
	if(damage < 0){
		damage = 0;
	}

	return damage;
}
