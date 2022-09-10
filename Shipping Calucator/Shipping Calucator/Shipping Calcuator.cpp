
#include <iostream>
using namespace std;
int main()
{
	cout << "Shipping Calculator: " << endl << endl;

	double cost_order;
	cout << "Cost of item ordered: ";
	cin >> cost_order;

	double ship_cost;

	if (cost_order <= 0)
		cout << "You must enter a positive number." << endl << endl;
	else
	{
		double total_cost;
		if ((cost_order > 0) && (cost_order < 30))
		{
			ship_cost = 5.95;
		}
		else if ((cost_order > 30) && (cost_order < 50))
		{
			ship_cost = 7.95;
		}
		else if ((cost_order >= 50) && (cost_order < 75))
		{
			ship_cost = 9.95;
		}
		else
		{
			ship_cost = 0;
		}
		cout << "Shipping Cost: " << ship_cost << endl;
		total_cost = cost_order + ship_cost;
		cout << "Total cost: " << total_cost << endl << endl;
	}
	cout << "Bye!"<<endl<<endl;
}