#include <iostream>
using namespace std;
int main()
{
	int i;
	int sum = 0;
	cout << "The original value of the sum: " << sum << endl << endl;
	for (i = 1; i < 5; ++i)
	{
		sum += i;
		cout << "The " << i << "-th execution of the FOr loop: "
		<< "sum = " << sum << endl << endl;

	}
	cout << "\nThe final result of sum: " <<sum
		<< "after " << i - 1 << "repetitions." << endl;
	return 0;
}