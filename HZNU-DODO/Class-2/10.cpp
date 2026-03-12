#include <bits/stdc++.h>
using namespace std;

int main()
{
    int score;
    cin >> score;

    if (score < 0 || score > 100)
    {
        cout << "Invalid" << endl;
    }
    else if (score < 60)
    {
        cout << "Failed" << endl;
    }
    else
    {
        cout << fixed << setprecision(1) << (score / 10.0) - 5.0 << endl;
    }

    return 0;
}