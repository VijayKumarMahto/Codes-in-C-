#include <iostream>
using  namespace std;
int main()
{
    cout << "Gallons Converter" << endl << endl;

    double gallons;
    cout << "Enter gallons: ";
    cin >> gallons;

    double liters;
    liters = gallons * 3.7854;
    cout << "Liters: " << liters << endl;

    double quarts;
    quarts = gallons * 4;
    cout << "Quarts: "<< quarts << endl;

    double ounces;
    ounces = 128 * gallons;
    cout << "Ounces: "<< ounces << endl<<endl;

    cout << "Bye!" << endl << endl;
    return 0;
}
 




