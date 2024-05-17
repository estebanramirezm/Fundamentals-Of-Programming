// Lab  #4B
// Purpose: This program finds the number of acres in a tract and outputs the result
// Author: Esteban Ramirez 
// Date:  Feb 3rd, 2022

#include <iostream>
using namespace std;

// This function calculates the number of acres in a tract
int main()
{
	// Declaring the variables the program will use
	float landFeet, acres;

	// Declaring and defining the conversion rate as a constant 
	const unsigned int FEET_PER_ACRES = 43560;

	// Greeting 
	cout << "Welcome! We are going to find how many acres are in a tract of land.\n\n";

	// Ask how many square feet are in the land
	cout << "What is the size of the land area in square feet? ";
	cin >> landFeet;

	// Calculate the acres in the tract
	acres = landFeet / FEET_PER_ACRES;

	// Display the size of the land in acres
	cout << "\nThis tract has " << acres << " acres of land area.";

	// Goodbye 
	cout << "\n\nRun this program again to find the size in acres of other land tracts! :)";

	// program executed successfully (and ends) 
	return 0;
}
