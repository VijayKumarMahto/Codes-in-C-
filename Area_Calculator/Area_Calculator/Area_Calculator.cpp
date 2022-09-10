#include <iostream>
using namespace std;
int main()
{
	cout << "AREA CALCULATOR" << endl;

	int menu_item;

	cout<<"1.Circle"<< endl;
	cout<<"2.Square"<< endl;
	cout<<"3.Rectangle"<< endl<< endl;

	cout << "Menu Item: ";
	cin >> menu_item;
	cout<< endl;

	double  circle, square, rectangale, radius, height, width, circle_area, square_area, rectangle_area;

	switch (menu_item)
	{
	case 1:
		cout << "CIRCLE" << endl;

		cout << "Radius: ";
		cin >> radius;

		circle_area = 3.14159 * radius * radius;
		cout << "Area: " << circle_area << endl;
		break;

	case 2:
		cout << "SQUARE" << endl;

		cout << "Height: ";
		cin >> height;

		square_area = height * height;
		cout << "Area: " << square_area << endl;
		break;

	case 3: 
		cout << "RECTANGLE" << endl;

		cout << "Height: ";
		cin >> height;

		cout << "Width: ";
		cin >> width;

		rectangle_area = height * width;
		cout << "Area: " << rectangle_area << endl;
		break;

	default: 
		cout << "Invalid Menu item!";
		cin >> menu_item;
		cout << "Bye!";
	}
	cout << "Bye!";

}

