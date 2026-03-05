#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while (cin >> n, n)
    {
        for (int i = 0; i < n; i++)
        {
            vector<int> matrix;
            int temp;
            for (int j = 0; j < n; j++)
            {
                cin >> temp;
                matrix.push_back(temp);
            }

            sort(matrix.begin(), matrix.end());
            for (auto p = matrix.begin(); p != matrix.end(); p++)
            {
                cout << *p << " ";
            }
            cout << endl;
        }
    }
    return 0;
}