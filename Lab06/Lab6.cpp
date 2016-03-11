//Lab06
//Joshua Wessling
// 4. Comment your code where appropriate Negative points only if missing.
// a.Your name must appear in the top of the program
// b.All functions must be documented.


#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

// Write a program that will allow the user to calculate the volume and area of various shapes.  

// 2b. Only declare PI as global, all other variables should be local to the function they are used in.
const double PI = 3.141592653589793;

// 2c. Do not change any of the function prototypes
void showMenu(char & c);
void getRadius(double & r);
void getBaseAndHeight(double & b, double & h);
void getLength(double & l);
double areaCircle(double r);
double areaTriangle(double b, double h);
double volumeSphere(double r);
double volumePrism(double b, double h, double l);
bool IsNegative(double val);
void count(bool display = false);
void aboutAuthor();

int main()
{
	char choice;
	double radius = 0;
	double base = 0;
	double height = 0;
	double length = 0;
	
	do
	{
		// 1a.	Show the menu by calling showMenu.
		showMenu(choice);

		// 1c. Use a switch statement for the different cases including Q.
		// For each case, call the appropriate get function to read the input.
		// Next, call the appropriate area or volume function.
		// Display the return value of the function by using a cout statement in main.
		// Call the count function and pass in false to increment the counter for every 
		// selection except(A and Q).
		// 2d.Print out values with 2 digits after the decimal place

		switch (choice)
		{
		case 'c':
		case 'C':
			getRadius(radius);
			cout << "The area of the circle is: " << setprecision(2) << fixed <<
				areaCircle(radius) << endl << endl;
			break;

		case 't':
		case 'T':
			getBaseAndHeight(base, height);
			cout << endl << "Base = " << base << " " << "Height = " << height << 
				endl;
			cout << "The area of the triangle is " << setprecision(2) << fixed <<
				areaTriangle(base, height) << endl << endl;
			break;

		case 's':
		case 'S':
			getRadius(radius);
			cout << "The volume of the sphere is: " << setprecision(2) << fixed <<
				volumeSphere(radius) << endl;

		case 'p':
		case 'P':
			getBaseAndHeight(base, height);
			getLength(length);
			cout << "Base = " << base << " " << "Height = " << height << " " <<
				"Length = " << length << endl;
			cout << "The volume of the triangular prism is: " << setprecision(2) <<
				fixed << volumePrism(base, height, length) << endl;

		case 'a':
		case 'A':
			aboutAuthor();

		default:
			cout << "The option that you selected " << choice << " is not valid.\n";
		}
	} while (choice != 'q' && choice != 'Q');
	
	system("pause");
}

//  Use function prototypes and place the function definitions after main.  
	
// Displays the menu and reads in the choice Your choices are displayed in the sample output.
// There is one exception, the menu should also contain a Q option for Quit.
	void showMenu(char & c)
	{
		cout << "Enter C or c for the area of a Circle\n";
		cout << "Enter T or t for the area of a Trianxgle\n";
		cout << "Enter S or s for the area of a Sphere\n";
		cout << "Enter P or p for the area of a Triangular Prism\n";
		cout << "Enter A or a for the information about the author\n";
		cout << "Enter Q or q to quit this program\n";
		cin >> c;
	}

	// Gets the radius and checks that it is  positive by calling the IsNegative function	
	void getRadius(double & r)
	{
		cout << "Enter the radius: ";
		cin >> r;
		cout << endl << "The radius is " << r << endl;
	}

	// Calculates the area of a circle and uses a global variable PI.  Returns the area.
	double areaCircle(double r)
	{
		return r = PI * pow(r, 2);
	}

	// Gets the base and the height and checks  they are  positive by calling the 
	//	IsNegative function
	void getBaseAndHeight(double & b, double & h)
	{
		cout << "Enter the base: ";
		cin >> b;
		cout << endl << "Enter the height: ";
		cin >> h;
	}
	// Calculates the area of a triangle and returns the area.
	double areaTriangle(double b, double h)
	{
		return (0.5) * (b * h);
	}
	// Calculates the volume of a sphere and uses a global variable PI.  
	// Returns the volume.
	double volumeSphere(double r)
	{
		return (4 / 3) * PI * (r*r*r);
	}

	// Gets the length and checks  that it is  positive by calling the 
	// IsNegative function
	void getLength(double & l)
	{
		cout << endl << "Enter the length: ";
		cin >> l;
	}

	//Calculates the volume of a triangular prism.  It must call the area of the triangle 
	//function and use its return value in the calculation.  Returns the volume.
	double volumePrism(double b, double h, double l)
	{
		return ((1 / 2) * b * l) * h;
	}

	//	Displays:
	//1. The author’s name
	//2. The author’s major
	//3. The name of your high school

	void aboutAuthor()
	{
		cout << "Joshua Wessling, Computer Science, Liberty High.\n\n";
	}