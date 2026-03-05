#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();

    while (t--)
    {
        string str;
        getline(cin, str);

        size_t pos = str.find("mwy");

        while (pos != string::npos)
        {
            str.replace(pos, 3, "return my hard-earned money");
            pos = str.find("mwy");
        }

        cout << str << endl;
    }

    return 0;
}