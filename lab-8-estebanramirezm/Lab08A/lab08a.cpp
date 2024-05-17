/*
Lab #8
Purpose: This program determines and outputs the tax for a given income
Author: Esteban Ramirez
Date: March 3rd, 2022
*/

#include <iostream>
using namespace std;

// function that determines and outputs the tax for a given income
int main()
{
    // Declaring variables for the program
    double income;

    // Greeting 
    cout << "TAX RATE CALCULATION PROGRAM\n\n";

    // Get the user input
    cout << "Enter your income: ";
    cin >> income;
    cout << endl;

    // Output the tax rate
    if (income < 0)
    {
        cout << "Sorry, but $" << income << " is not a valid income :(" << endl << endl;
    }
    else if (income < 45000.00)
    {
        cout << "Your income of $" << income << " would be taxed at a rate of 12.0%, which is equal to $" << (income * 0.12) << endl << endl;
    }
    else if (income <= 89999.99)
    {
        cout << "Your income of $" << income << " would be taxed at a rate of 18.2%, which is equal to $" << (income * 0.182) << endl << endl;
    }
    else if (income <= 119999.99)
    {
        cout << "Your income of $" << income << " would be taxed at a rate of 20.6%, which is equal to $" << (income * 0.206) << endl << endl;
    }
    else 
    {
        cout << "Your income of $" << income << " would be taxed at a rate of 23.5%, which is equal to $" << (income * 0.235) << endl << endl;
    }

    // Goodbye 
    cout << "Thanks for using this program :)" << endl;

    // program executed successfully
    return 0;

}