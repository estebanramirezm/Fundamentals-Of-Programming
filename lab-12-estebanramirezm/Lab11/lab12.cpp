/*
Lab #12
Purpose: This program works with a multi-dimensional array (input/output + math operations)
Author: Esteban Ramirez
Date: April 7th 2022
*/

#include<iostream>
#include <iomanip>      
using namespace std;

// Constants for the program
const int ROW_SIZE = 5;
const int COL_SIZE = 6;

// Function prototypes (additional information in the definitions)
void readArray(int[][COL_SIZE], int);
void printArray(int[][COL_SIZE], int);
void printTotals(int[][COL_SIZE], int);

// Function that works with a multi-dimensional array (input/output + math operations)
int main()
{
    // Variables for the program
    int array2D[ROW_SIZE][COL_SIZE], rows = 0, columns = 0;

    // Greeting
    cout << "ARRAY INPUT PROGRAM:" << endl << endl;

    // Get user input for the array
    readArray(array2D, rows);

    // Print the array and separate it 
    cout << "\nThis is your array: \n\n";
    printArray(array2D, rows);

    // Separate and print the totals of the array
    cout << "--------------------------------" << endl;
    printTotals(array2D, columns);

    // Goodbye 
    cout << endl << endl << "Thanks for running this program:)" << endl;
    return 0;
}

// Function that reads from the user a sequence of integer values and loads them into the array
void readArray(int array2D[][COL_SIZE], int rows)
{
    // Loop used to read integers and load them into the array
    for (int columns = 0; columns < COL_SIZE; columns++)
    {
        // Message that tells the user that a new column has started
        if (columns > 0)
            cout << "\nNew Column...\n\n";

        for (int rows = 0; rows < ROW_SIZE; rows++)
        {
            if (rows == 0) {
                cout << "Enter an integer: ";
            }
            else {
                cout << "Enter another integer: ";
            }
            cin >> array2D[rows][columns];
        }
    }
    return;
}

// Function that prints all the integers in the array row by row
void printArray(int array2D[][COL_SIZE], int rows)
{
    // Loop used to print the array on the same line, each in 5 spaces
    for (int rows = 0; rows < ROW_SIZE; rows++)
    {
        for (int columns = 0; columns < COL_SIZE; columns++)
        {
            cout << setw(5) << array2D[rows][columns];
        }
        cout << endl;
    }

    return;
}

// Function that prints the total of each of the columns of the array
void printTotals(int array2D[][COL_SIZE], int columns)
{
    // Loop used to print the totals on one line, each column total in 5 spaces
    for (int columns = 0; columns < COL_SIZE; columns++)
    {
        int sum = 0;

        for (int rows = 0; rows < ROW_SIZE; rows++)
        {
            sum += array2D[rows][columns];
        }
        cout << setw(5) << sum;
    }
    return;
}

