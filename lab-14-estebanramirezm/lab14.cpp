/*
Lab #14
Purpose: Calculating the average of a number of tests and dropping the lowest test score from it
Author: Esteban Ramírez
April 21st 2022
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Function prototypes
void selectSort(double*, int);
double average(double*, int);

// Function that calculates the average of a number of tests dropping the lowest test score
int main()
{
	// Variables declaration
	int scoresNumber;
	double testAverage;

	// Greeting
	cout << "TEST SCORE AVERAGE PROGRAM" << endl << endl;

	// Get the number of test scores (with input validation for a total bigger than 0)
	cout << "How many test scores will you enter? ";
	cin >> scoresNumber;
	while (scoresNumber < 1)
	{
		// cin.ignore(2);
		cout << "\nThe total of scores averaged cannot be negative\n";
		cout << "Enter another number: ";
		cin >> scoresNumber;
	}

	// cin.ignore(2);


	// Declare a pointer to an array to hold the scores
	double* scorePtr = new double[scoresNumber];
	
	
	// Loop that loads user-input scores into the array
	for (int count = 0; count < scoresNumber; count++)
	{
		cout << "\nEnter the score for test #" << (count + 1) << ": ";
		cin >> *(scorePtr+count);

		while (scorePtr[count] < 0)
		{
			cout << "\nThe score cannot be negative.\n";
			cout << "Enter another number: ";
			cin >> *(scorePtr + count);
		}
	}

	// Sort the test scores.
	selectSort(scorePtr, scoresNumber);

	// Get the average of the test scores and display it
	testAverage = average(scorePtr, scoresNumber);
	cout << endl << endl << "The average score (dropping the lowest score) is: " << testAverage << endl;

	// Release of used allocated memory
	delete[] scorePtr;
	scorePtr = NULL;

	return 0;
}


// Function that selection sorts the array in an ascending order
void selectSort(double* score, int size)
{
	int startScan, minIndex;
	double minValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = *(score + startScan);

		for (int index = startScan + 1; index < size; index++)
		{
			if (*(score + index) < minValue)
			{
				minValue = *(score + index);
				minIndex = index;
			}
		}

		*(score + minIndex) = *(score + startScan);
		*(score + startScan) = minValue;
	}
}

// Function that calculates and returns the average of the values stored in the array 
double average(double* score, int size)
{
	// Variables & format
	double total = 0.00, totalAverage;
	cout << fixed << showpoint << setprecision(2);

	// Display the first score  
	cout << "\nHere is the list of sorted scores:" << endl;
	cout << *score << " ";

	// Loop that drops the lowest score from the average & displays all the rest of the array
	for (int count = 0; count < size - 1; count++)
	{
		score++;
		cout << *score << " ";
		total += *score;
	}

	totalAverage = total / (size - 1);

	return totalAverage;
}
