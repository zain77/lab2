// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <iostream>
#include "factorial_class.h"
using namespace std;

void main() {
	lab2 object; // making object of class 
	int number = 0; // initial declarations

	cout << "FACTORIAL ALGORITHM" << endl;
	cout << "\nEnter a number: ";
	cin >> number; // take data from user

	int answer = object.factorial(number); // calling function

	cout << "\nFactorial of " << number << ": " << answer << endl; // printing final result on screen
	system("PAUSE");
}