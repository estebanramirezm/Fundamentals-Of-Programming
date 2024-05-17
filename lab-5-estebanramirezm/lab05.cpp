/*
Lab #6
Purpose: This program computes floating-point values according to certain equations for a, b, c, d, x, y, and z given floating-point values a, b, c, and d
Author: Esteban Ramirez
Date:  Feb 17th, 2022
*/

#include <iostream>
#include <math.h>       
using namespace std;

// This function computes floating-point values according to certain equations for a, b, c, d, x, y, and z given floating-point values a, b, c, and d
int main()
{
	// Declaring the variables the program uses
	double a, b, c, d, x, y, z;

	// Greeting 
	cout << "Hello! This is a math computing program.\n\n";

	// Ask for values a, b, c, and d
	cout << "Input a value for a: ";
	cin >> a;
	cout << "Input a value for b: ";
	cin >> b;
	cout << "Input a value for c: ";
	cin >> c;
	cout << "Input a value for d: ";
	cin >> d;

	// Calculating a, b, c, d, x, y, and z values
	a = a + (b * c) + d;
	x = (a + b) * (c + d);
	y = (c * x) - 4;
	b = (x * y) / pow(x, 2);
	z = c;
	y = a + b + x + y;
	x = pow(x, 2) + pow(y, 2) + pow(z, 2);

	// Output the results for all the variables
	cout << "\nThe value for a would be: " << fixed << a;
	cout << "\nThe value for b would be: " << fixed << b;
	cout << "\nThe value for c would be: " << fixed << c;
	cout << "\nThe value for d would be: " << fixed << d;
	cout << "\nThe value for x would be: " << fixed << x;
	cout << "\nThe value for y would be: " << fixed << y;
	cout << "\nThe value for z would be: " << fixed << z;

	// Goodbye 
	cout << "\n\nRun this program again to do some more math :)";

	// program executed successfully 
	return 0;
}


