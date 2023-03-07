#pragma once
#include <iostream>

using namespace std;


float getheight() {

	float height;
	float heightin;

	cout << "How many feet tall are you? (ex: 5.3) ";
	cin >> height;


	heightin = height * 12;

	return heightin;

};

float getweight() {

	float weight;

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

	cout << BMIestimate;
	return BMIestimate;

};

void BMIcheck() {





};