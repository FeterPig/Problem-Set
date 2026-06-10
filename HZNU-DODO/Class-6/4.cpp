#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool isAnagram(string str1, string str2);
int main()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    cout << boolalpha << isAnagram(str1, str2) << endl;
    return 0;
}
/* 请在下面编写isAnagram函数 */
bool isAnagram(string str1, string str2)
{
    if (str1 == str2)
    {
        return false;
    }
    else
    {
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        if (str1 == str2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}