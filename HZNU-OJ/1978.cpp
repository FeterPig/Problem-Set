#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string temp;
        cin >> temp;

        vector<char> v(temp.begin(), temp.end());
        sort(v.begin(), v.end());

        for (char c : v)
        {
            cout << c;
        }
        cout << " ";

        while (next_permutation(v.begin(), v.end()))
        {
            for (char c : v)
            {
                cout << c;
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}