/**************************************************
CSE 1311 - C++ Programming for Engineers
Brandon K. Thomas
Lab 4c: MaxFunc

Goal(s): Build a max() function
Build a max() function that takes 3 arguments and returns the argument which is the highest.  Call this function from the main().  In main(), declare and set 3 variables, pass these variables to the max() function, and then print the result.  Do all this in main().  The function only figures the max.
**************************************************/
#include <iostream>
using namespace std;

int max(int a, int b, int c) {
	if(a > b && a > c) {
		cout << "The largest number is " << a << endl;
	}

	else if(b > a && b > c) {
		cout << "The largest number is " << b << endl;
	}

	else if(c > a && c > b) {
		cout << "The largest number is " << c << endl;
	}
}
int main() {
	int a, b, c;

	cout << "This application will compare the input of 3 numbers and print the highest to the console." << endl;

	cout << "Please enter the first number." << endl;
		cin >> a;

	cout << "Please enter the second number." << endl;
		cin >> b;

	cout << "Please enter the third number." << endl;
		cin >> c;

	max(a, b, c);

	return 0;
} // End of main