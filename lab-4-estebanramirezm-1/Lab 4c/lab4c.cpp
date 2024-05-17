// Lab  #4C
// Purpose: This program finds the average score of five tests
// Author: Esteban Ramirez 
// Date:  Feb 3rd, 2022

#include <iostream>
using namespace std;

// This function calculates the average score of five tests
int main()
{
	// Declaring the variables the program will use
	float score1, score2, score3, score4, score5, average;

	// Greeting 
	cout << "Welcome! We are going to find the average score between 5 tests.\n\n";

	// Ask for the five test scores
	cout << "Test #1 score is: ";
	cin >> score1;
	cout << "Test #2 score is: ";
	cin >> score2;
	cout << "Test #3 score is: ";
	cin >> score3;
	cout << "Test #4 score is: ";
	cin >> score4;
	cout << "Test #5 score is: ";
	cin >> score5;

	// Calculate the average score of the five tests
	average = (score1 + score2 + score3 + score4 + score5) / 5;

	// Display the average score 
	cout << "\nThe average score between these 5 tests is: " << average;

	// Goodbye 
	cout << "\n\nRun this program again to find another average score! :)";

	// program executed successfully (and ends) 
	return 0;
}
