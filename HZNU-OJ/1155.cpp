#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    while (cin >> str)
    {
        for (char &c : str)
        {
            if (c >= 65 && c <= 90)
            {
                if (c == 'Z')
                {
                    c = 'a';
                }
                else
                {
                    c += 33;
                }
            }
            else if (c >= 97 && c <= 122)
            {
                switch (c)
                {
                case 'a':
                case 'b':
                case 'c':
                    c = '2';
                    break;
                case 'd':
                case 'e':
                case 'f':
                    c = '3';
                    break;
                case 'g':
                case 'h':
                case 'i':
                    c = '4';
                    break;
                case 'j':
                case 'k':
                case 'l':
                    c = '5';
                    break;
                case 'm':
                case 'n':
                case 'o':
                    c = '6';
                    break;
                case 'p':
                case 'q':
                case 'r':
                case 's':
                    c = '7';
                    break;
                case 't':
                case 'u':
                case 'v':
                    c = '8';
                    break;
                case 'w':
                case 'x':
                case 'y':
                case 'z':
                    c = '9';
                    break;

                default:
                    break;
                }
            }
        }
        cout << str << endl;
    }

    return 0;
}