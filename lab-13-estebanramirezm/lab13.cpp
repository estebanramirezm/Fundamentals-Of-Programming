/*
Lab #13
Purpose: This program bubble-sorts a generated pseudo-random vector
Author: Esteban Ramirez
Date: April 14th 2022
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime>
using namespace std;

// Function prototypes
void bubbleSort(vector<int> &);
void fillVector(vector<int> &);
void swap(int&, int&);

// Constant declaration
const int VECTOR_SIZE = 25;

// This function  bubble-sorts a generated pseudo-random vector
int main()
{
    // Greeting message
    cout << "V E C T O R  S O R T I N G  P R O G R A M" << endl << endl;
    cout << "This program demonstrates the Bubble Sort on a Vector of Integers!" << endl << endl;

    // Declare vector-variable 
    vector <int>values(VECTOR_SIZE);

    // Set seed for the a pseudo-random number generator 
    srand(time(NULL));

    // Put a pseudo-random series of numbers in the vector
    fillVector(values);

    // Display the numbers (temporary function)
    bubbleSort(values);
    
    // Goodbye message
    cout << endl << "Thanks for running this program" << endl;
    return 0;
}

// Function that fills a vector with pseudo-random numbers 
void fillVector(vector<int>& vect)
{
    // Remove any garbage data from the vector
    vect.clear();

    // Loop that fills the vector
    for (int count = 0; count < VECTOR_SIZE; count++)
        vect.push_back(rand() % 99 + 0);
    return;
}

// Functions that bubble sort the vector & output it
void bubbleSort(vector <int>& vect)
{
    // Sorting loop + message output
    int maxElement, index, pass = 0;
    bool isDone = false;

            cout << "Original:  ";
            for (int count = 0; count < VECTOR_SIZE; count++)
            {
                cout << vect[count] << " ";
            }
            cout << endl;    
    for (maxElement = VECTOR_SIZE - 1; maxElement > 0 && !isDone; maxElement--)
    {
        isDone = true;
        if (pass == 0)
        {

            pass++;
        }
        if (pass > 0 && pass < 10)
        {
            cout << "Pass #" <<setw(2) << pass << ":  ";
            for (int count = 0; count < VECTOR_SIZE; count++)
            {
                cout << vect[count] << " ";
            }
            cout << endl;
            pass++;
        } 
        else
        {
            cout << "Pass #" << pass << ":  ";
            for (int count = 0; count < VECTOR_SIZE; count++)
            {
                cout << vect[count] << " ";
            }
            cout << endl;
            pass++;
        }
        for (index = 0; index < maxElement; index++)
        {
            if (vect[index] > vect[index + 1])
            {
                swap(vect[index], vect[index + 1]);
                isDone = false;
            }
        }
    }
}
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}