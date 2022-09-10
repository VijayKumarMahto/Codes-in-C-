#include <iostream>
using namespace std;
int main()
{
	cout << "Paycheck Calculator" << endl<<endl;

	double hours_worked;
	cout << "Hours Worked: ";
	cin >> hours_worked;

	double hourly_pay_rate;
	cout << "Hourly Pay Rate: ";
	cin >> hourly_pay_rate;

	double	tax_rate_percent;
	cout << "Tax rate in percent: ";
	cin >> tax_rate_percent;
	cout << endl;

	double gross_pay = hours_worked * hourly_pay_rate;
	double tax_rate = tax_rate_percent;
	double tax_amount = gross_pay * (tax_rate_percent / 100.0);
	double home_pay = gross_pay - tax_amount;

	cout << "Gross Pay: " << gross_pay << endl;
	cout << "Tax Rate: " << tax_rate_percent << "%"<< endl;
	cout << "Tax Amount: " << tax_amount << endl;
	cout << "Take Home pay: " << home_pay << endl << endl;
	return 0;
}
	