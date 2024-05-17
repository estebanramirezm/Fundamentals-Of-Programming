/*
Lab #8
Purpose: This program outputs a food based on a given letter
Author: Esteban Ramirez
Date: March 3rd, 2022
*/

#include <iostream>
using namespace std;

// function that outputs a food based on a given letter
int main()
{
    // Declaring variables for the program
    char letter_input;

    // Greeting 
    cout << "Letters Food Table\n\n";

    // Get the user input
    cout << "Enter a b or c to get a food: ";
    cin >> letter_input;
    cout << endl;

    // Output a food based on the input 
    switch (letter_input)
    {
    case 'A':
    case 'a':
        cout << "a is for apple" << endl << endl;
        break;
    case 'B':
        cout << "b is for banana" << endl << endl;
        break;
    case 'b':
        cout << "b is for banana" << endl << endl;
        break;
    case 'C':
        cout << "c is for carrot" << endl << endl;
        break;
    case 'c':
        cout << "c is for carrot" << endl << endl;
        break;
    default:
        cout << "you have selected an undefined food" << endl << endl;
        break;
    }

    // Goodbye 
    cout << "Thanks for using this program :)";

    // program executed successfully
    return 0;
}
