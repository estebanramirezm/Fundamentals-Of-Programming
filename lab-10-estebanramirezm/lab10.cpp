/*
Lab #10
Purpose: This program reads the numbers of a file and displays less than, greater than, and equal to the first number
Author: Esteban Ramírez
Date: March 24th 2022
*/

#include <iostream>
#include <fstream>
using namespace std;

// This function reads the numbers of a file and displays less than, greater than, and equal to the first number
int main()
{
    // Declare variables
    int currentReadValue, countLess = 0, countMore = 0, countEqual = 1;
    ifstream inputFile;

    // Greeting
    cout << "F I L E   R E A D I N G   P R O G R A M " << endl;
    cout << "----------------------------------------" << endl << endl;

    // Open the file and get the first number 
    inputFile.open("Random.txt");
    inputFile >> currentReadValue;

    // Lock the first number into a constant
    const int FIRST_VALUE = currentReadValue;

    // Loop that reads through all the program, then file is closed
    while (inputFile >> currentReadValue)
    {
        if (currentReadValue < FIRST_VALUE)
        {
            countLess++;
        }
        else if (currentReadValue == FIRST_VALUE)
        {
            countEqual++;
        }
        else if (currentReadValue > FIRST_VALUE)
        {
            countMore++;
        }
    }
    inputFile.close();

    // Output the results (less than, greater than, equal to)
    cout << "The first number in this file (" << FIRST_VALUE << ") appears " << countEqual << " time(s)" << endl;
    cout << "There are " << countMore << " numbers greater than " << FIRST_VALUE << " on this file" << endl;
    cout << "There are " << countLess << " numbers less than " << FIRST_VALUE << " on this file" << endl;

    // Goodbye message
    cout << "\nThanks for running this program!";
}