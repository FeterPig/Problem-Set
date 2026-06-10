#include <iostream>
using namespace std;

class A
{
public:
    virtual ~A() { cout << "A::~A() called" << endl; }
    virtual void print()
    {
        cout << "print come form class A" << endl;
    }
};
class B : public A
{
private:
    char *buf;

public:
    B(int n) { buf = new char[n]; }
    ~B()
    {
        delete[] buf;
        cout << "B::~B() called" << endl;
    }
    void print()
    {
        cout << "print come from class B" << endl;
    }
};
void fun(A *a)
{
    delete a;
}
int main()
{
    A *a = new B(10);
    a->print();
    fun(a);
    B *b = new B(20);
    fun(b);
    return 0;
}