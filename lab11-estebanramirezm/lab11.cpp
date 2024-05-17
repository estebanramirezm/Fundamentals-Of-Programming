/*
Lab #11
Purpose: This program does some conversion rates with programmer-defined functions & a driver function
Author: Esteban Ramirez
Date: March 31st 2022
*/

#include <iostream>
using namespace std;

// Functions the program uses
double userInput(string inputPrompt);
void result(string outputMessage, double value);
double inchToCm(double);
void yardToM();
void mileToKm();

// Conversion rates
const double INCHES_PER_CM = 2.54;
const double YARDS_PER_M = 0.9144;
const double MILES_PER_KM = 1.609344;


// Driver function that tests userInput, result, inchToCm, yardToM, mileToKm
int main()
{
    double inches, cm;


    // Greeting
    cout << "U N I T  C O N V E R S I O N  P R O G R A M\n" << "-------------------------------------------\n\n";
    cout << "Welcome :)" << endl << endl;

    // Inches to centimeters Conversion

    // Yards to Meters Conversion
    yardToM();

    // Miles to Kilometers Conversion
    mileToKm();

    // Goodbye
    cout << "Thanks for running this program!" << endl;
    return 0;
}

// Function that gets input from the user
double userInput(string inputPrompt)
{
    // Variable declaration
    double input;

    // Ask for user input and return it
    cout << inputPrompt;
    cin >> input;
    return (input);
}

// Function that displays a converted value
void result(string outputMessage, double value)
{
    // Display results with the arguments recieved
    cout << outputMessage << value << endl << endl;
    return;
}

// Function that converts from inches to centimeters
void inchToCm()
{
    // Variables declaration
    string inputPrompt, outputMessage;
    double conversion;

    // Call the user input function and convert the value
    inputPrompt = "Enter a decimal value in inches: ";
    conversion = userInput(inputPrompt) * INCHES_PER_CM;

    // Call the output function to display the result
    outputMessage = "The value you entered converted to centimeters would be : ";
    result(outputMessage, conversion);
    return;
}

// Function that converts from yards to meters
void yardToM()
{
    // Variables declaration
    string inputPrompt, outputMessage;
    double conversion;

    // Call the user input function and convert the value
    inputPrompt = "Enter a decimal value in yards: ";
    conversion = userInput(inputPrompt) * YARDS_PER_M;

    // Call the output function to display the result
    outputMessage = "The value you entered converted to meters would be : ";
    result(outputMessage, conversion);
    return;
}

// Function that converts from miles to kilometers
void mileToKm()
{
    // Variables declaration
    string inputPrompt, outputMessage;
    double conversion;

    // Call the user input function and convert the value
    inputPrompt = "Enter a decimal value in miles: ";
    conversion = userInput(inputPrompt) * MILES_PER_KM;

    // Call the output function to display the result
    outputMessage = "The value you entered converted to kilometers would be : ";
    result(outputMessage, conversion);
    return;
}
