#include <iostream>
using namespace std;
/* 请在此处编写mid函数 */
#include <algorithm>
#include <vector>
int mid(int a, int b, int c)
{
    vector<int> v(3);
    v[0] = a;
    v[1] = b;
    v[2] = c;
    sort(v.begin(), v.end());
    return v[1];
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << mid(a, b, c);
    return 0;
}