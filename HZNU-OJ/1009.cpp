#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while (cin >> N)
    {
        if (N == 0)
        {
            break;
        }

        set<int> s;
        for (int i = 0; i < N; i++)
        {
            int temp;
            cin >> temp;
            s.insert(temp);
        }

        cout << s.size() << endl;
        for (auto p = s.begin(); p != s.end(); p++)
        {
            cout << *p << " ";
        }
        cout << endl
             << endl;
    }

    return 0;
}