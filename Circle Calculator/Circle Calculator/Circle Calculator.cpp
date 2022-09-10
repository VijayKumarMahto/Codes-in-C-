
#include <iostream>

using namespace std;

int main()

{
	cout<< "Circle Calculator" << endl << endl;
	double radius;
	cout << "Enter radius: ";
	cin >> radius;

	double diameter;
	diameter = 2 * radius;

	double circumference;
	circumference = 2 * 3.14159 * radius;

	double area;
	
	area = 3.14159 * radius * radius;

	cout << "diameter: " << diameter << endl 
		<< "circumference: " << circumference << endl

		

	return 0;

};