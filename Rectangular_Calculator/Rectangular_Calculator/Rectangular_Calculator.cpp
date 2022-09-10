#include <iostream>
using namespace std;

int main()
{
	cout << "Rectangular calculator" << endl<< endl;
	
	double height; 
	cout << "Enter the height: ";
	cin >> height;
	
	double width;
	cout << "Enter the width: ";
	cin >> width;

	if ((height > 0) && (width > 0))
		{
		double area = height * width;
		cout << "Area: " << area << endl << endl; 
		}
	else
		{
			cout << "Height and width must be positive."<<endl;	
		}
	cout<< "Bye!" << endl << endl;
	return 0;
}