#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int id;
    static int count;

public:
    static void InitCount() { count = 0; }

    Student() { count++; }
    Student(int val) : id(val) { count++; }
    Student(const Student &other) : id(other.id) { count++; }

    ~Student() { count--; }

    friend void PrintCount();
    friend void Print(Student s);
};
int Student::count;
void PrintCount()
{
    cout << "Total " << Student::count << " students" << endl;
}
void Print(Student s)
{
    cout << "the id is " << s.id << endl;
}
int main()
{
    Student::InitCount();
    Student s;
    PrintCount();
    Student s1(10);
    Student s2(s1);
    PrintCount();
    Print(s2); // 调用拷贝构造函数，调用结束调用析构函数
    PrintCount();
    return 0;
}