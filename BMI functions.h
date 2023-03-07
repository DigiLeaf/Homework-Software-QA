#pragma once
#include <iostream>

/*	Program name: BMI calculator
	Author: Leif Orth
	NetId: leo94
	This file is the header for the BMImain file. This file contains
	all of the functions necessary for the program to calcuate a user's
	BMI.
	*/


using namespace std;


float getheight() {

	float height;
	float heightin;
	float inches;
	//gathering info on user 
	cout << "How many feet tall are you? (ex: 5) ";
	cin >> height;

	cout << "How many inches  extra inches tall are you? (ex: 3) ";
	cin >> inches;

	//converting the feet to inches for BMIcalc
	heightin = height * 12;

	//adding the feet converted to inches and the extra inches for total inches tall
	float totalheightin = heightin + inches;

	return totalheightin;

};

float getweight() {

	float weight;

	//gathering info on user
	cout << "How many pounds do you weigh? (ex: 125) ";
	cin >> weight;

	return weight;

}

float BMIcalc(float height, float weight) {

	//multiply weight by metric conversion factor of 0.45
	
	float weightkg = weight * 0.45;

	//multiply height in inches by metric conversion factor 0.025

	float heightcm = height * 0.025;

	// square the height

	float heightcm2 = heightcm * heightcm;

	//divide weight in kg by height in cm2
	float BMIestimate = weightkg / heightcm2;

	//for testing purposes to ensure calculations are correct
	cout << BMIestimate;
	return BMIestimate;

};

void BMIcheck() {





};
