#include <iostream>
using namespace std;
int main()
{
	cout << "The Future Value Calculator" << endl << endl;

	char choice = 'y';
	while (choice == 'y' || choice == 'Y')
	{
		double monthly_investment;
		cout << "Enter Monthly investment: ";
		cin >> monthly_investment;

		double yearly_interst_rate;
		cout << "Enter yearly Interest rate: ";
		cin >> yearly_interst_rate;

		int years;
		cout << "Enter number of years: ";
		cin >> years;

		double monthly_rate = yearly_interst_rate / 12 / 100;
		int months = years * 12;

		double future_value = 0;
		for (int i = 1; i <= months; ++i)
		{
			future_value = (future_value + monthly_investment) * (1 + monthly_rate);
		}
		cout << "Future value: " << future_value << endl;

		cout << "Press y to continue  or another non-whitespace key to quit: ";
		cin >> choice;
		cout << endl;
	}
	cout << "Bye !" << endl << endl;
	return 0;
}