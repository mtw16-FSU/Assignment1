/*
 * File: SimpleHammer.h
 * Author: Matthew Wix <mtw16@my.fsu.edu>
 *
 * Created on February 3rd, 2019
 */


#include "Weapon.h"
#include <string>

#ifndef SIMPLEHAMMER_H_
#define SIMPLEHAMMER_H_

class SimpleHammer : public Weapon{

/* Defines a weapon called Simple Hammer with 
 * hitpoints = 25, ignores armor points if armor < 30
 */

public:
	SimpleHammer() : Weapon("Simple Hammer", 25.0){} //Calls Weapon(name, htpoints) constructor with values "Simple Hammer" and 25.0 

	virtual ~SimpleHammer(){}

	virtual double hit(double armor);


};

#endif
