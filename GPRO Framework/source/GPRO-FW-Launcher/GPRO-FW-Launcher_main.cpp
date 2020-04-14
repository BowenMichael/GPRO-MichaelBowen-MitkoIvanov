// GPRO-FW-Launcher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <GPRO-FW.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
//#include "../GPRO-FW/GPRO-FW.h"
using namespace std;

int main()
{
	int guess = 50;
	string input = "y";
	cout << "I am going to guess your age Just tell me if I am higher or lower or correct." << endl;
	do {
		cout << "I am think your age is: " << guess << ". Is it higher lower or did I get it right?";
		cin >> input;
		//guess = ageGuesser(input, guess);
	} while (input != "y");
}