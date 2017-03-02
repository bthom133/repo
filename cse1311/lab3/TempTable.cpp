/**************************************************************************************************
CSE 1311: C++ Programming for Engineers
Lab 3a: Temp Table
Brandon K. Thomas

Goal: Write a C++ program that calculates the Celsius equivalent to Fahrenheit temperatures.
Use loops to increment the temperature from 0 - 300 by +20.
Celsius = (Fahrenheit - 32.0) * (5.0 / 9.0)
The program should print the table 2 times.
**************************************************************************************************/
#include <iostream>

using namespace std;
int main() {
	int fahr;
	double cel;
	double y;
	y = 5.0 / 9.0;

	cout << "Temperature" << endl;
	for( fahr = 0.0 ; fahr <= 300.0; fahr = (fahr + 20)) {
		cel = (( fahr - 32 ) * ( 5.0/9 ));
		cout << " 	" << fahr << " 	" << cel << endl;

		cout << "\n"; 

		int fahr = 0;
		double cel;
		while( fahr <= 300.0 ) {
			cel = (( fahr - 32 ) * ( 5.0/9 ));
			cout << " 	" << fahr << " 	" << cel << endl;
			fahr = fahr + 20;
		}
	}
	return 0;
} // End of main