#include <iostream>
using namespace std;
int main()
{
	cout << "Change Calculator" << endl << endl;
	
	char choice;
	do
	{
		int cents;
		cout << "Enter number of cents (0-99): ";
		cin >> cents;
		cout << endl;

		int quaters = cents / 25;
		cents = cents % 25;

		int dimes = cents / 10;
		cents = cents % 10;

		int nickels = cents / 5;
		cents = cents % 10;

		int	penneis = cents;

		cout << "Quaters: " << quaters << endl;
		cout << "Dimes: " << dimes << endl;
		cout << "Nickels: " << nickels << endl;
		cout << "Pennies: " << penneis << endl << endl;

		cout << "Press y to continue or any other non- whitespace to quit: ";
		cin >> choice;
		cout << endl;


	} while (choice == 'y'|| choice =='y');

	






}

