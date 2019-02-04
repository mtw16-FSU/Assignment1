/*
 * File: MasterAxe.cpp
 * Author: Matthew Wix <mtw16@my.fsu.edu>
 *
 * Created on February 3rd, 2019
 */

#include "MasterAxe.h"

double MasterAxe::hit(double armor){
	
	//damage decreases at very slow rate as armor increases
	double damage = (1+0.01*armor)*hitPoints - armor;
	
	//if armor > (1+0.01*armor)*hitPoints, damage = 0
	if(damage < 0){
		damage = 0;
	}
	return damage;
}
