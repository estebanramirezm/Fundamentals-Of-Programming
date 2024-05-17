/*
Lab #15
Purpose: this program reads a sentence and tells how many words does it have
Author: Esteban Ramirez
Date: April 28th 2022
*/

#include <iostream>
#include <vector>
using namespace std;

// Function prototype
int wordCounter(const char*);

// Function that reads a sentence and tells how many words does it have
int main()
{
    // Constant and Array-variable definition
    const int SIZE = 10000;
    char userInput[SIZE];

    // Greeting
    cout << "WORD COUNTER PROGRAM" << endl << endl;

    // Getting user-input for the sentence
    cout << "Write a sentence in this console:  ";
    cin.getline(userInput, SIZE);

    // Output the result
    cout << "The sentence you entered has " << wordCounter(userInput) << " words" << endl << endl;

    // Goodbye message
    cout << "Thanks for running this program! " << endl;

    return 0;
}

// Function that counts the words in the user-input sentence
int wordCounter(const char* cString)
{
    // Variable definition
    int wordCount = 0;
    int length = 0;

    // Loop that counts the words
    while (*cString != '\0')
    {
        if (*cString == ' ')
            length = 0;
        else if (++length == 1)
            wordCount++;

        cString++;
    }

    // Return value
    return wordCount;
}
