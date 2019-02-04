/*
 * File: SimpleHammer.cpp
 * Author: Matthew Wix <mtw16@my.fsu.edu>
 *
 * Created on February 3rd, 2019
 */

#include "SimpleHammer.h"


double SimpleHammer::hit(double armor){
	double damage;

	if(armor  < 30){
		damage = hitPoints; //if armor points less than 30, ignores armor points
	}else{
		damage = hitPoints - armor; //otherwise damage is hitpoints - armor points
	}

	//if armor points is higher than hitpoints sets damage = 0
	if(damage < 0){
		damage = 0;
	}

	return damage;
}
