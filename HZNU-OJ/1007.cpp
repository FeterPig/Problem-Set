#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    int cnt = 0;
    while (getline(cin, line))
    {
        int len = line.length();
        for (int i = 0; i < len; i++)
        {
            if (isalpha(line[i]))
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}