#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    while (getline(cin, str))
    {
        size_t start = 0;
        while (1)
        {
            size_t pos1 = str.find('"', start);
            if (pos1 == string::npos)
            {
                break;
            }

            size_t pos2 = str.find('"', pos1 + 1);
            if (pos2 == string::npos)
            {
                break;
            }

            str.replace(pos1 + 1, pos2 - pos1 - 1, "");

            start = pos1 + 2;
        }
        cout << str << endl;
    }

    return 0;
}