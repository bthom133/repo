	/*********************************************************************************************************
CSE 1311: C++ Programming for Engineers
Brandon K. Thomas
Lab 3b: Kilo Table
Goal(s:
This program will display a static table from 1 - 100.
*********************************************************************************************************/
#include <iostream>
using namespace std;
int main() {	
	int mil;
	float kilo;
		cout << left << "Miles" << "	"<< left << "Kilometers" << endl;
	for ( int mil = 1; mil <= 100; mil = mil + 1){
		kilo = mil * 1.609;
		cout << left << mil << left << "	" << kilo << endl;
		cout.precision(5);
	}
	return 0;
} // End of main