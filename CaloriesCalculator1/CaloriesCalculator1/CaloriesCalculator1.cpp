
#include <iostream>
using namespace std;

int main()
{
	cout << "Welcome to calories calculator\n\n";
	double servings;
	cout << "Enter number of servings:";
		cin >> servings;

	double calories;
		cout << " Enter number of calories:";
		cin >> calories;

	double total_calories = servings * calories;

		cout << "Total calories:" << total_calories << endl<<endl;
		return 0;
}
