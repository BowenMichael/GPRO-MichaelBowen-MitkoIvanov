#include <iostream>
#include <string>
using namespace std;

const int MAX_AGE = 150;
const int MIN_AGE = 0;

int ageGusser(string input, int guess) {
	switch (input.at(0)) {
	case 'h':
		cout << "Ok let me try again";
		return guess + ((MAX_AGE - guess) / 2);
		break;
	case 'l':
		cout << "Ok let me try again";
		return guess - ((guess - MIN_AGE) / 2);
		break;
	case 'c':
		cout << "Yes I am so smart!" << endl;
		return -1;
		break;
	}
}