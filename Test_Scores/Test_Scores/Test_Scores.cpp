#include <iostream>
using namespace std;
int main()
{
    cout << "Enter test score from 0 to 100." << endl;
    cout << "To end the program , Enter -1." << endl << endl;

    int score = 0;
    int count = 0;

    double total = 0.0;
    while (score != -1)
    {
        cout << "Enter the Score: ";
        cin >> score;

        if (score > 100)
        {
            cout << "Score must be from 0 to 100. Please try again." << endl;
        }
        else if (score < -1)
        {
            cout << "Score can't be negative. Please try again." << endl;
        }
        else if (score > -1)
        {
            count += 1;
            total += score;
        }
    }
        double  avg_score = 0.0;
        if (count > 0)
        {
            avg_score = total / count;
        }
        cout << endl
            <<"Score count: " << count << endl
            << "Score total: " << total << endl
            << "Average score: " << avg_score << endl;
}