#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A constructor" << endl;
        g();
    }
    virtual ~A() { cout << "A destructor" << endl; }
    void g() { fun(); }
    virtual void fun() { cout << "Call class A's fun" << endl; }
};

class B : public A
{
public:
    B() { cout << "B constructor" << endl; }
    ~B() { cout << "B destructor" << endl; }
};

class C : public B
{
public:
    C() { cout << "C constructor" << endl; }
    ~C() { cout << "C destructor" << endl; }
    void fun() { cout << "Call class C's fun" << endl; }
};

int main()
{
    A *a = new C;
    a->g();
    delete a;
    return 0;
}