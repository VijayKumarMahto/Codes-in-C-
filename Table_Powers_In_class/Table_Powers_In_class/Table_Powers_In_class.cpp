#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	cout << "Table of Powers" << endl << endl;

	int start, stop;
	while (true)
	{
		cout << "Enter start number: ";
		cin >> start;

		cout << "Enter stop number: ";
		cin >> stop;

		cout<<endl;

		if (start > stop)
		{
			cout << "Start number must not be larger than stop number." << endl
				<< "Please try again." << endl << endl;
			continue;
		}
		else
		{
			break;
		}
	}

	cout << "Number\tSquared\tCubed" << endl;
	cout << "======\t======\t======" << endl;

	for (int num = start; num <= stop; ++num)
	{
		int square = pow (num, 2);
		int cube = pow (num, 3);
		cout << num << "\t" << square << "\t" << cube << endl;
	}
}
