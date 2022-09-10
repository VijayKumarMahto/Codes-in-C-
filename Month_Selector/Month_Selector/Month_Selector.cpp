#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Month Selector: " << endl << endl;
	
	int year;
	cout << "Enter year: ";
	cin >> year;

	int number;
	cout << "Enter Month (1-12): " << endl;
	cin >> number;

	int name;
	switch (name)
	{
	case 1:
		name = "January";
		break;

	case 2:
		name = "Febraury";
		break;
	case 3:
		name = "March";
		break;
	case 4:
		name = "April";
		break;
	case 5:
		name = "May";
		break;
	case 6:
		name = "June";
		break;
	case 7:
		name = "July";
		break;
	case 8:
		name = "August";
		break;
	case 9:
		name = "September";
		break;
	case 10:
		name = " october ";
		break;
	case 11:
		name = "November";
		break;
	case 12:
		name = "December";
		break;
	default:
		name = "Invalid month";
	}
	cout << "Month name: " << name << endl;



	




















	}

	