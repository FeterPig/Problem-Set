#include <bits/stdc++.h>
using namespace std;

string num_to_char(int n)
{
    string res = "";
    while (n > 0)
    {
        res += char('A' - 1 + n % 26);
        n /= 26;
    }
    reverse(res.begin(), res.end());
    return res;
}

int char_to_num(string s)
{
    int res = 0;
    for (char c : s)
    {
        res = res * 26 + (c - 'A' + 1);
    }
    return res;
}

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    for (int i = 0; i < N; ++i)
    {
        string str;
        cin >> str;

        if (isdigit(str[0]))
        {
            int num = stoi(str);
            cout << num_to_char(num) << endl;
        }
        else
        {
            cout << char_to_num(str) << endl;
        }
    }

    return 0;
}