#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int count[26];

int main()
{
    string str;
    getline(cin, str);

    for (char c : str)
    {
        if (isalpha(c)) // 字母？
        {
            count[tolower(c) - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            cout << static_cast<char>('a' + i) << ":" << count[i] << endl;
        }
    }

    return 0;
}