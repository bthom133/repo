/*********************************************************************************
CSE 1311 - C++ Programming for Engineers
Brandon K. Thomas
Mini-Project 1: Part 2

Goal(s): 
Modify your Area Project, from Mini-Project #1.  
Add 4 new Functions to your Project.

calcAreaCircle()
calcAreaSquare()
calAreaRectangle()
calAreaTriangle()  

Each of these functions will process an Area calculation:
(i.e. for a Circle, your function would do the following 4 steps:
1. prompt the User for to enter a radius.  
2. Read in the radius, 
3. calculate the area by using the formula a=pi*Radius squared.     4. Then print out the area of the circle.   ) 

Lastly modify the if statements/switch statement(whichever one you used) in your main function.  Your main function will no longer do all the work to process the area calculations.  Your main() function will simply call the 4 new functions that you just built.  If the users enters a ‘C’, call the function “calcAreaCircle()” to process the calculation of the area of a circle.  Do the same for the other 3 figures.
*********************************************************************************/
#include <iostream>
using namespace std;

double calcAreaCircle() {
// Area of Circle = pi * r^2
	int rad;
	cout << "\n Please enter the radius. \n" << endl;
		cin >> rad;
	int rad_2 = rad * rad;
	double pi = 3.14159;
	double circ = rad * pi;
	cout << "\n The area of the circle is " << circ << " units. \n";
}

double calcAreaSquare() {
// Area of a Square = side * side
	int side;
	cout << "\n Please enter the side length. \n";
		cin >> side;
	double square = (1.0) * (side * side);
	cout << " \n The area of the square is " << square << " units \n";
}

double calcAreaRectangle() {
// Area of a Rectangle = length * width
	int length;
	int width;

	cout << "\n Please enter the length. \n";
		cin >> length;

	cout << "\n Please enter the width. \n";
		cin >> width;
	double rect = length * width * (1.0);
	cout << "\n The area of the rectangle is " << rect << " units. \n";
}

double calcAreaTriangle() {
// Area of a triangle = (0.5) base * height
	int base;
	int height;

	cout << "\n Please enter the base length. \n";
		cin >> base;

	cout << "\n Please enter the height. \n";
		cin >> height;
	double triangle = (0.5) * (base * height);
	cout << "\n The area of the triangle is " << triangle << " units. \n";
}
int main() {
	while(true){
		cout << "\n This application will calculate the area of some elementary shapes. \n";

		cout << "\n C) Circle \n";
		cout << "\n S) Square \n";
		cout << "\n R) Rectangle \n";
		cout << "\n T) Triangle \n";

		cout << "\n To select which area to calculate, please select the letter to the left of your choice. \n";

		cout << "\n To exit the application, please enter X. \n";
		
		char in;
			cin >> in;
			
			if(in == 'x' || in == 'X') {
				return 0;
			}

			if(in == 'c' || in == 'C') {
				calcAreaCircle();
			}

			if(in == 's' || in == 'S') {
				calcAreaSquare();
			}

			if(in == 'r' || in == 'R') {
				calcAreaRectangle();
			}

			if(in == 't' || in == 'T') {
				calcAreaTriangle();
			}
	}
	return 0;
}