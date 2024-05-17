// Lab #2
// Purpose:This program calculates the difference and sum of two integers. 
// Author: Esteban Ramirez
// Date: Jan 20th, 2022

#include <iostream>
using namespace std;

//this function ....
int main()
{
	// Variables the program is going to be using.
	int number1, number2, answer1, answer2; 

	// Greeting.
	cout << "Welcome! We are going to do some math.\n";
   
	// Ask for the first integer. 
	cout << "Which is the first number you want to operate?\n> ";
	cin >> number1;
	
	// Ask for the second integer.
	cout << "Which is the second number you want to operate?\n> ";
	cin >> number2;
		
	// Calculate the answers.
	answer1 = number1 + number2;

	answer2 = number1 - number2;
		
	// Give the answers to the user.
	cout << "The results are: " << answer1 << " and " << answer2 << "\n> ";
		
	// Goodbye message
	cout << "Start this program again to calculate with other numbers. Thanks for using it!\n> ";

   return 0;
}