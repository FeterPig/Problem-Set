#include <bits/stdc++.h>
using namespace std;

int main()
{
    int min_i = 0, max_i = 0;
    int min_v = 100, max_v = 0;
    for (int i = 0; i < 10; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp > max_v)
        {
            max_v = tmp;
            max_i = i;
        }
        if (tmp < min_v)
        {
            min_v = tmp;
            min_i = i;
        }
    }
    cout << max_v << " " << max_i << endl;
    cout << min_v << " " << min_i;

    return 0;
}