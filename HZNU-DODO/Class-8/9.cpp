#include <iostream>
using namespace std;

template <typename T1 = int, typename T2 = double>

class Pair
{
private:
    T1 first;
    T2 second;

public:
    Pair(T1 x, T2 y) : first(x), second(y) {}

    T1 getFirst() const { return first; }
    T2 getSecond() const { return second; }

    void setFirst(T1 val) { first = val; }
    void setSecond(T2 val) { second = val; }

    void print() const { cout << "[" << getFirst() << "," << getSecond() << "]" << endl; }

    void swap(Pair &other)
    {
        T1 tmp1;
        T2 tmp2;

        tmp1 = other.getFirst();
        tmp2 = other.getSecond();

        other.setFirst(getFirst());
        other.setSecond(getSecond());

        setFirst(tmp1);
        setSecond(tmp2);
    }

    bool operator==(const Pair &other) { return first == other.getFirst() && second == other.getSecond(); }
    bool operator<(const Pair &other) { return first < other.getFirst() || (first >= other.getFirst() && second < other.getSecond()); }
    bool operator<=(const Pair &other) { return *this < other || *this == other; }
    bool operator>(const Pair &other) { return !(*this <= other); }
    bool operator>=(const Pair &other) { return !(*this < other); }
    bool operator!=(const Pair &other) { return !(*this == other); }
};

int main()
{
    int x1, x2;
    double y1, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    Pair<int, double> p1(x1, y1), p2(x2, y2);
    cout << "p1:";
    p1.print();
    cout << "p2:";
    p2.print();
    p1.swap(p2);
    cout << "p1:";
    p1.print();
    cout << "p2:";
    p2.print();
    if (p1 < p2)
        cout << "p1 < p2" << endl;
    else if (p1 == p2)
        cout << "p1 == p2" << endl;
    else
        cout << "p1 > p2" << endl;
    return 0;
}