/*
Lab #7
Purpose: This program displays the cosine, sine, and tangent of an angle given by the user, then displays the exponential of a pseudo-random number (between -10 and 10) as well as the natural logarithm, base-10 logarithm, and square root of its absolute value
Author: Esteban Ramirez
Date: Feb 24th
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

// function that displays the cosine, sine, and tangent of an angle given by the user, then displays the exponential of a pseudo-random number (between -10 and 10) as well as the natural logarithm, base-10 logarithm, and 	square root of its absolute value
int main()
{
	// Declaring the variables for the program
	double angle_degrees, angle_radians, rand_number;

	// Declaring and defining the constants for the program 
	const int RAND_MIN_VALUE = -10;
	const int RAND_MAX_VALUE = 10;


	// Greeting
	cout << "Hello, welcome to this math program!" << endl << endl;

	// Getting the angle in degrees and converting it to radians 
	cout << "First, we are going to calculate the sine, cosine, and tangent for an angle: " << endl;
	cout << "Please enter an angle in degrees: ";
	cin >> angle_degrees;
	angle_radians = angle_degrees * (M_PI / 180);

	// Displaying the sine, cosine, and tangent
	cout << endl << setprecision(3) << fixed << "The sine of " << angle_degrees << " is:  " << sin(angle_radians) << endl;
	cout << setprecision(3) << fixed << "The cosine of " << angle_degrees << " is:  " << cos(angle_radians) << endl;
	cout << setprecision(3) << fixed << "The tangent of " << angle_degrees << " is: " << tan(angle_radians) << endl;

	// Generating the pseudorandom number 
	cout << "\nNow, a pseudorandom number is going to be generated.... " << endl;
	cout << "..." << endl << ".." << endl << "." << endl;
	srand(time(0));
	rand_number = rand() % (RAND_MAX_VALUE - RAND_MIN_VALUE + 1) + RAND_MIN_VALUE;
	cout << "Our pseudorandom number is: " << rand_number << endl << endl;

	// Displaying the exponential, natural logarithm, base-10 logarithm, and square root
	cout << setprecision(3) << "The exponential of " << rand_number << " is: " <<  exp(rand_number) << endl;
	cout << setprecision(3) << "The natural logarithm of the absolute value of " << rand_number << " is: " << log(abs(rand_number)) << endl;
	cout << setprecision(3) << "The base-10 logarithm of the absolute value of " << rand_number << " is: " << log10(abs(rand_number)) << endl;
	cout << setprecision(3) << "The square root of the absolute value of " << rand_number << " is: " << sqrt(abs(rand_number)) << endl;

	// Goodbye 
	cout << "\nWe are done, thanks for using this program!" << endl;

	// program executed successfully
	return 0;
}
