#include <iostream>
using namespace std;
bool isPalindrome(int n);
int main()
{
    int n;
    cin >> n;
    cout << boolalpha << isPalindrome(n) << endl;
    return 0;
}
// 请在下面编写isPalindrome函数
#include <algorithm>
bool isPalindrome(int n)
{
    string s1 = to_string(n);
    string s2 = s1;
    reverse(s1.begin(), s1.end());
    if (s1 == s2)
    {
        return true;
    }
    else
    {
        return false;
    }
}