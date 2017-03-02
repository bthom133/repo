/*****
CSE-1311 C++ Programming for Engineers
Program #2 Data and Simple Calculations
Brandon K. Thomas
*****/

#include <iostream>

using namespace std;

int main()
{
	int Age;
	Age = Age;
	
	int IQ;
	IQ = IQ;
	
	int Weight;
	Weight = Weight;

	cout << "What is your age?" << endl;
	cin >> Age;
	cout << "In 10 years you will be " << Age + 10 << endl;

	cout << "What is your IQ?" << endl;
	cin >> IQ;
	cout << "If you were a little smarter your IQ would be " << IQ + 40 << endl; 

	cout << "How much do you weigh?" << endl;
	cin >> Weight;
	cout << "If you lost 5 pounds you would be " << Weight - 5 << endl;
	
	return 0;
}