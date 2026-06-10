#include <iostream>
using namespace std;
class MyVector
{
public:
    MyVector(int = 0, int = 0, int = 0);
    MyVector(const MyVector &);
    void display();
    friend MyVector add(MyVector &v1, MyVector &v2);   // 向量加法
    friend MyVector sub(MyVector &v1, MyVector &v2);   // 向量减法
    friend int dot(MyVector &v1, MyVector &v2);        // 向量点乘
    friend MyVector cross(MyVector &v1, MyVector &v2); // 向量叉乘
private:
    int x, y, z;
};

MyVector::MyVector(int x, int y, int z) : x(x), y(y), z(z) {}
MyVector::MyVector(const MyVector &other)
{
    x = other.x;
    y = other.y;
    z = other.z;
}

void MyVector::display() { cout << "(" << x << "," << y << "," << z << ")" << endl; }

MyVector add(MyVector &v1, MyVector &v2) { return MyVector(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z); }
MyVector sub(MyVector &v1, MyVector &v2) { return MyVector(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z); }
int dot(MyVector &v1, MyVector &v2) { return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z; }
MyVector cross(MyVector &v1, MyVector &v2) { return MyVector(v1.y * v2.z - v2.y * v1.z, v1.z * v2.x - v2.z * v1.x, v1.x * v2.y - v2.x * v1.y); }

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    MyVector a;
    MyVector b(1);
    MyVector c(2, 3);
    MyVector d(x, y, z);
    MyVector e(c);
    MyVector xx = add(a, b);
    xx.display();
    MyVector yy = sub(b, c);
    yy.display();
    MyVector zz = cross(c, d);
    zz.display();
    int w = dot(d, e);
    cout << w << endl;
    return 0;
}