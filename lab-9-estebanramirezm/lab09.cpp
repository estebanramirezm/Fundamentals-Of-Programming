/*
Lab #9
Purpose: This program does some math with a user-defined sequence of numbers ranging from 1 through 10
Author: Esteban Ramirez
Date: March 17, 2022
*/

#include <iostream>
using namespace std;

// function that does some math with a user-defined sequence of numbers ranging from 1 through 10
int main()
{
    // Define and declare variables and constants
    double user_input, total_sum = 0, min = 10, max = 0, count = 0, average;
    const int SENTINEL = 0;
    char repeat_program = 'Y';

    // Greeting 
    cout << "Number Sequence Math Program" << endl << "with values from 1 through 10" << endl << endl;

    // Ask for initial input

    // Loop that allows the program to repeat itself
    do
    {   
        min = 10, max = 0, count = 0, total_sum = 0, average = 0;
        cout << "Enter an integer (0 to quit): ";
        cin >> user_input;

        while (user_input < 0 || user_input > 10)
        {
            cout << "This is not a valid input, try again (0 to quit): ";
            cin >> user_input;
        }
       // Loop that allows the user to input the sequence
        while ( user_input != SENTINEL)
        {
            // Add 1 to the count
            ++count;

            // Add value to the sum of numbers (for the average)
            total_sum += user_input;

            // If current element is greater than max
            if (user_input > max)
                max = user_input;

            // If current element is smaller than min
            if (user_input < min)
                min = user_input;

            // Ask for another value
            cout << "Enter another integer (0 to quit): ";
            cin >> user_input;

            while (user_input < 0 || user_input > 10)
            {
                cout << "This is not a valid input, try again: ";
                cin >> user_input;
            }
        }

        // Get the average
        average = total_sum / count;

        // input validation
        if (count == 0)
            min = 0, max = 0;

        // Output the results
        cout << endl << "CountMin   Max   Average" << endl;
        cout << count << "    " << min << "     " << max << "     " << average << endl;

        // Ask if the program is working with another sequence (to repeat itself or output a goodbye message)
        cout << endl << "Do you wish to do this again with another sequence? (Y/N) ";
        cin >> repeat_program;
        
        // reset values +  input validation
       

    } while (repeat_program == 'y' || repeat_program == 'Y');

    cout << endl << "Thanks for running this program :)" << endl;
    return 0;
}

