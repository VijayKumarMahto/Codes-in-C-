#include <iostream>
using namespace std;
int main()
{
	cout << "Tip Calculator" << endl << endl;

	double meal_cost;
	cout << "Cost of meal: ";
	cin >> meal_cost;

	int tip_percent_min;
	cout << "Enter the first term of the tip percent progression: ";
	cin >> tip_percent_min;

	int tip_percent_no;
	cout << "Enter the number of terms in the tip percent prrogession: ";
	cin >> tip_percent_no;

	int tip_percent_diff;
	cout << "Enter the common difference of the tip percent progession: ";
	cin >> tip_percent_diff;

	cout << endl;

	for (int i = 0, tip_percent = tip_percent_min; i < tip_percent_no; ++i, tip_percent += tip_percent_diff)
	{
		double tip_amount = meal_cost * (tip_percent / 100.0);
		double total = meal_cost + tip_amount;

		cout << tip_percent << "%" << endl
			<< "Tip amount : " << tip_amount << endl
			<< "total amount: " << total << endl << endl;
	}
}


