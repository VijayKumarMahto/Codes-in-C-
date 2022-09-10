
#include <iostream>

using namespace std;

int main()
{
	cout << "Welcome to grade calculator" << endl << endl;

	double number;
	cout << "Enter a numercial grade between (1-100): ";
	cin >> number;
	if (number < 0)
	{
		cout << "Number can't be negative" << endl << endl;

	}
	else if (number >100)
	{
		cout << "Number is too Large" << endl << endl;
	}
	else
	{
		char letter;
		if (number > 87)
		{
			letter = 'A';
		}
		else if (number > 79)
		{
			letter = 'B';
		}
		else if (number > 66)
		{
			letter = 'C';
		}
		else if (number > 59)
		{
			letter = 'D';
		}
		else
		{
			letter = 'F';
		}
		cout << "Letter grade: " << letter << endl << endl;
	}
	cout << "Bye";

}
	
