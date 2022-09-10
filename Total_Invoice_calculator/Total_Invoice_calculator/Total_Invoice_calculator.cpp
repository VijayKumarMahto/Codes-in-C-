#include <iostream>

using namespace std;
int main()
{
	cout << "Invoice Total Calculator 3.0 " << endl << endl;
	double subtotal, discount_percent = 0, discount_amount = 0, invoice_total = 0;
	char customer_type;
	cout << "Enter customer type (r/w/c): ";
	cin >> customer_type;

	cout << "Enter subtotal:";
	cin >> subtotal;

	switch (tolower(customer_type))
	{
	case 'r':
		if (subtotal < 100)
		{
			discount_percent = 0.0;
		}
		else if (subtotal >= 100 && subtotal < 250)
		{
			discount_percent = 0.1;
		}
		else if (subtotal >= 250 && subtotal < 500)
		{
			discount_percent = 0.2;
		}
		else if (subtotal >= 500)
		{
			discount_percent = 0.3;
		}
		break;

	case 'w':
		if (subtotal < 500)
		{
			discount_percent = 0.4;
		}
		else if (subtotal >= 500)
		{
			discount_percent = 0.5;
		}
		break;

	case 'c':
		discount_percent = 0.25;
	cout << "Discount percent:" << discount_percent << "\n";
	discount_amount = subtotal * discount_percent;
	cout << "Discount amount: " << subtotal * discount_percent << "\n";
	cout << "Invoice total: " << subtotal - discount_amount << "\n\n";
	break;

	default:
		cout << "Please select letter r/w/c" << customer_type;
	cout << "Bye!";

}
