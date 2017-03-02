 /************************************************************************************************************
CSE 1311 - C++ Programming for Engineers
Brandon K. Thomas
Lab 4a: PresFunc

Goal(s): Build a presidents() function.
Build a presidents() function that prints out the names of the first 7 Presidents of the
United States, each on a separate line.  Have your main function call the presidents()function.
Call your project "PresFunc", and store it on your flash drive.
************************************************************************************************************/
#include <iostream>
using namespace std;

/*
Presidents of the United States

1. George Washington
2. John Adams
3. Thomas Jefferson
4. James Madison
5. James Monroe
6. John Quincy Adams
7. Andrew Jackson
*/

void presidents() {
	cout << "I. George Washington" << endl;
	cout << "II. John Adams" << endl;
	cout << "III. Thomas Jefferson" << endl;
	cout << "IV. James Madison" << endl;
	cout << "V. James Monroe" << endl;
	cout << "VI. John Quincy Adams" << endl;
	cout << "VII. Andrew Jackson" << endl;
	}
	
int main() {
	cout << "The First Seven Presidents of the United States" << endl;

	presidents();
	return 0;
} // End of Main