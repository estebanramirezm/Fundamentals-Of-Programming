// Lab #3b
// Purpose: This program outputs out the sum, difference, product and quotient of two integers
// Author: Esteban Ramirez 
// Date: Jan 27th, 2022


#include <iostream> 
using namespace std;

// this function calculates the sum, difference, product, and quotient of two integers
int main() 
{
	// Defining the variables the program is going to use
	int int1, int2, sum, difference, product, quotient;

	// Greeting
	cout << "Welcome to this program! We are doing some math today." << "\n" << "\n";

	// Ask for the user to input the first integer. 
	cout << "Enter first integer: ";
	cin >> int1;

	// Ask for the user to input the second integer. 
	cout << "Enter second integer: ";
	cin >> int2;
	cout << "\n";

	// Calculate the answers
	sum = int1 + int2;
	difference = int1 - int2;
	product = int1 * int2;
	quotient = int1 / int2;

	// Give the answers to the user. 
	cout << "Sum is............" << sum << "\n";
	cout << "Difference is ...." << difference << "\n";
	cout << "Product is........" << product << "\n";
	cout << "Quotient is ......" << quotient << "\n";


	// Goodbye message 
	cout << "\n" << "Run this program again to do math with other numbers. Thanks for using it!\n ";

	//  program executed successfully (and ends) 
	return 0;
}
