#include <iostream>
using namespace std;

class Number
{
public:
    int val_;

    Number(int val) : val_(val) {}

    Number &add(int val)
    {
        val_ += val;
        return *this;
    }
    Number &sub(int val)
    {
        val_ -= val;
        return *this;
    }

    void print() { cout << val_ << endl; }
};

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    Number n(a);
    n.sub(b).add(c);
    n.print();
    return 0;
}