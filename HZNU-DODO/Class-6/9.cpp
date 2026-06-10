#include <bits/stdc++.h>
using namespace std;

int main()
{
    string isbn;
    cin >> isbn;

    int num = 0;

    int index = 1;
    for (int i = 0; i < 12; i++)
    {
        if (isdigit(isbn[i]))
        {
            num += index * (isbn[i] - '0');
            index++;
        }
    }
    num %= 11;

    char check;
    if (num == 10)
    {
        check = 'X';
    }
    else
    {
        check = num + '0';
    }

    if (check == isbn[12])
    {
        cout << "Right" << endl;
    }
    else
    {
        isbn[12] = check;
        cout << isbn << endl;
    }

    return 0;
}