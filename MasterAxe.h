/*
 * File: MasterAxe.h
 * Author: Matthew Wix <mtw16@my.fsu.edu>
 *
 * Created on February 3rd, 2019
 */

#include <string>
#include "Weapon.h"

#ifndef _MASTERAXE_H_
#define _MASTERAXE_H_

/*
 * Defines a weapon called Master Axe that has hitpoints = 80 and has its damage
 * decrease at a very slow rate as armor points increase
 */

class MasterAxe : public Weapon{

public:
	MasterAxe() : Weapon("Master Axe", 80.0){} //Calls Weapon(name, hitpoints) constructor with values "Master Axe" and 80.0

	virtual ~MasterAxe(){}

	virtual double hit(double armor);

};

#endif
