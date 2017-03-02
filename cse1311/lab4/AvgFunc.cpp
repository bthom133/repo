/**************************************************
CSE 1311 - C++ Programming for Engineers
Brandon K. Thomas
Lab 4b: AvgFunc

Goal(s): Build an avg() function
Build an avg() function that takes 4 arguments and returns the average of these 4 numbers.  Call your function from the main().  In main(), declare and set 4 variables, pass these variables to the avg() function and then print the result.  Do all this in main().  The function only figures the average.
**************************************************/
#include <iostream>
using namespace std;

double avg(int w, int x, int y, int z) {
	return (w + x + y + z)/4.0;	
};

int main() {

	int w, x, y, z;

	cout << "This application calculates the average of 4 numbers." << endl;

	cout << "Please enter the first number." << endl;
		cin >> w;

	cout << "Please enter the second number." << endl;
		cin >> x;

	cout << "Please enter the third number." << endl;
		cin >> y;

	cout << "Please enter the fourth number." << endl;
		cin >> z;

	cout << "The average of 4 numbers is " << avg(w, x, y, z) << endl;
	return 0;
} // End of main