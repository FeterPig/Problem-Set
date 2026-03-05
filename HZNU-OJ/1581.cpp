#include <bits/stdc++.h>
using namespace std;

bool is_hws(string s)
{
    string restr_M = s;
    reverse(restr_M.begin(), restr_M.end());
    return s == restr_M;
}

int main()
{
    int L;
    cin >> L;

    while (L--)
    {
        int M;
        cin >> M;

        string str_M = to_string(M);
        int steps = 0;

        bool found = false;
        for (int step = 0; step < 8; step++)
        {
            string restr_M = str_M;
            reverse(restr_M.begin(), restr_M.end());

            str_M = to_string(stoi(str_M) + stoi(restr_M));
            steps++;

            if (is_hws(str_M))
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            cout << steps << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}