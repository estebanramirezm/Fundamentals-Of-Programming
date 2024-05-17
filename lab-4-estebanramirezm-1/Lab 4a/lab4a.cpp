// Lab  #4A
// Purpose: This program finds how many miles per gallon a car gets and outputs the result
// Author: Esteban Ramirez 
// Date:  Feb 3rd, 2022

#include <iostream>
using namespace std;

// This function calculates the miles per gallon a car gets
int main()
{
	// Declaring the variables the program will use
	float gallons, miles, mpgRatio;

	// Greeting 
	cout << "Hello! We are going to find how many miles per gallon a car gets.\n\n";

	// Ask for used gallons and miles traveled
	cout << "How many gallons did the car use?  ";
	cin >> gallons;
	cout << "How many miles did the car travel?  ";
	cin >> miles;

	// Calculate the miles per gallon ratio
	mpgRatio = miles / gallons;

	// Display the miles per gallon ratio
	cout << "\nThis car gets " << mpgRatio << " mile(s) per gallon.";

	// Goodbye 
	cout << "\n\nRun this program again to calculate another ratio! :)";

	// program executed successfully (and ends) 
	return 0;
}
