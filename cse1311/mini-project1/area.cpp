/************************************************************************
CSE 1311: C++ Programming for Engineers
Mini-Project 1: Part 1
Brandon K. Thomas

Goal(S):
1.)	Project #1 – Area Program
Create a new Project, call it “Area”.  
In this project your main function should:
read in a ‘C’, ‘S’, ‘R’, ‘T’ or an ‘X’.
If the user enters a ‘C’, they want to calculate the Area of a Circle.
(S is for Square, R for Rectangle, T for Triangle and X is to Exit). 
 
2.) The user should be able to enter an uppercase or lowercase letter.  

3.) Continue asking the user for another letter until they enter ‘X’
to exit.  

Once the User enters a letter, prompt the user for the data needed to
calculate the figure that they want.

(Example if they want to calculate the area of a Circle:
1. prompt the User for to enter a radius.  
2. Read in the radius, 
3. calculate the area by using the formula a=pi*Radius squared.
4. Then print out the area of the circle.  
5. Then go back to the original prompt for C S R T or X.) 
************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	char C, c, S, s, R, r, T, t, X, x;
	char in;
	// Area of Circle = pi * r^2
		double circ;
		double rad;
		double pi = 3.14159;

	// Area of Square = sid * sid
		double sqr;
		double sid;

	// Area of Rectangle = leng * wid
		double rect;
		double leng;
		double wid;

	// Area of Triangle = (1/2) bas * hei
		double tri;
		double bas;
		double hei;
	while (true) {
	cout << " \n This application will calculate the areas of: \n\n";
	
	cout << "C) Circles \n\n";
	cout << "S) Squares \n\n";
	cout << "R) Rectangles \n\n";
	cout << "T) Triangles \n\n";

	cout << "To select which area you would like to calculate, enter the letter to the left of the selection in the console prompt above.\n\n";

	cout << "To exit the application enter X.\n\n";
	cin >> in;
		
		if( in == 'x' || in == 'X' ) {
				return 0;
			}

			if( in == 'c' || in == 'C' ) {
				cout << "\n Please enter the radius. \n\n";
				cin >> rad;
				circ = pi * (rad * rad);
				cout << "\n Area of the Circle = " << circ << " units. \n\n";
			}
		
			if( in == 's' || in == 'S' ) {
				cout << "\n Please enter the side length. \n\n";
				cin >> sid;
				sqr = (sid * sid);
				cout << "\n Area of the Square = " << sqr << " units. \n\n"; 
			} 

			if( in == 'r' || in == 'R' ) {
				cout << "\n Please enter the length. \n\n";
				cin >> leng;
				cout << "\n Please enter the width. \n\n";
				cin >> wid;
				rect = (leng * wid);
				cout << " \n Area of the Rectangle = " << rect << " units. \n\n"; 
			} 

			if( in == 't' || in == 'T' ) {
				cout << "\n Please enter the base length. \n\n";
				cin >> bas;
				cout << "\n Please enter the height.  \n\n";
				cin >> hei;
				tri = (bas * hei) * (1/2.0);
				cout << " \n Area of the Triangle = " << tri << " units.\n\n";
			}
		} 		
	}