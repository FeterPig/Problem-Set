#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int first = 1;

    for (int i = 0; i < n; i++)
    {
        first += i;
        int temp = first;
        int add = i + 2;
        for (int j = 0; j < n - i; j++)
        {
            cout << temp << " ";
            temp += add;
            add++;
        }
        cout << endl;
    }

    return 0;
}