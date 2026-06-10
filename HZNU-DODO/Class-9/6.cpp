#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print() const = 0;
    virtual ~Base() {}
};

class A : public Base
{
    int k;

public:
    A(int v) : k(v) {}
    void print() const { cout << "A " << k << endl; }
};

class B : public Base
{
    int k;

public:
    B(int v) : k(v) {}
    void print() const { cout << "B " << k << endl; }
};

void PrintInfo(Base *p) { p->print(); }

Base *a[100];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            char c;
            int k;
            cin >> c >> k;
            if (c == 'A')
                a[i] = new A(k);
            else
                a[i] = new B(k);
        }
        cout << n << endl;
        for (int i = 0; i < n; ++i)
            PrintInfo(a[i]);
        cout << "****" << endl;
    }
}