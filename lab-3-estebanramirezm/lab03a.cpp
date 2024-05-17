// Lab #3a
// Purpose: This program outputs the ABCs in different lines, two times
// Author: Esteban Ramirez 
// Date: Jan 27th, 2022

#include <iostream>
using namespace std;

// function that outputs the ABCs in different lines two times
int main()  
{
	// Greeting 
	cout << "Alphabet Pyramid Program\n\n";

	// display the ABCs in new lines using five output statements with endl 
	cout << "    A" << endl;
	cout << "   BCD" << endl;
	cout << "  EFGHI" << endl;
	cout << " JKLMNOP" << endl;
	cout << "QRSTUVWXYZ" << endl;

	// separate the first group of ABCs from the second group of ABCs
	cout << "\n";

	// display the ABCs in new lines using one output statement with "\n"
	cout << "    A" << "\n" << "   BCD" << "\n" << "  EFGHI" << "\n" << " JKLMNOP" << "\n" << "QRSTUVWXYZ" << "\n";

	// program executed successfully (and ends) 
	return 0;
}
