#include <iostream>
#include <string>
using namespace std;

class A
{
private:
    int n;

public:
    A(int v = 0) : n(v) {}
    operator int() const { return n; }
    A &operator++()
    {
        ++n;
        return *this;
    }
    A operator++(int)
    {
        A tmp(*this);
        ++n;
        return tmp;
    }
};
class B
{
private:
    static int k;
    static int Square(int n)
    {
        cout << "k=" << k << endl;
        return n * n;
    }
    friend int main();
};
int B::k;

int main()
{
    A a1(1), a2(2);
    cout << a1++ << endl;
    (++a1) = 100;
    cout << a1 << endl;
    cout << ++a1 << endl;
    cout << a1 << endl;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> B::k;
        A a3(B::k);
        cout << B::Square(a3) << endl;
    }
    return 0;
}