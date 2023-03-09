#include "BMI functions.h"
#include <iostream>

/*	Program name: BMI calculator
	Author: Leif Orth
	NetId: leo94
	The goal of this program is to be a BMI calculator by taking
	in the user's height and weight then calculating their BMI and
	returning what BMI range they fall into.
	*/


using namespace std;


int main() {


	float BMI = BMIcalc(getheight(), getweight());


	BMIcheck(BMI);

};
