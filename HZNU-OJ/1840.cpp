#include <bits/stdc++.h>
using namespace std;

bool is_hws(string str)
{
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string str;

    while (cin >> str)
    {
        string str_1 = str;
        string str_2 = str;

        str_1.erase(0, 1);
        str_2.erase(str.length() - 1, 1);

        if (is_hws(str_1) || is_hws(str_2))
        {
            cout << "zz happy!" << endl;
        }
        else
        {
            cout << "zz cry" << endl;
        }
    }

    return 0;
}