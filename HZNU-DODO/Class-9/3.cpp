#include <iostream>
using namespace std;

class C
{
public:
    C() { cout << "C()" << endl; }
    ~C() { cout << "~C()" << endl; }
};

class B : public C
{
public:
    B() { cout << "B()" << endl; }
    ~B() { cout << "~B()" << endl; }
};

class A : public B, public C
{
public:
    A() { cout << "A()" << endl; }
    ~A() { cout << "~A()" << endl; }
};

class D : public A
{
public:
    D() { cout << "D()" << endl; }
    ~D() { cout << "~D()" << endl; }
};

class E : public D
{
public:
    E() { cout << "E()" << endl; }
    ~E() { cout << "~E()" << endl; }
};

int main()
{
    E e;
    return 0;
}