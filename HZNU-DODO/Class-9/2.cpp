#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    char sex;

public:
    Person(string n, char s) : name(n), sex(s) {}
    virtual void print() const
    {
        cout << "Name:" << name << ", Sex:" << sex << endl;
    }
};

enum Status
{
    FRESHMAN,
    SOPHOMORE,
    JUNIOR,
    SENIOR
};

class Student : public Person
{
    Status status;

public:
    Student(string n, char s, Status st) : Person(n, s), status(st) {}
    void print() const
    {
        Person::print();
        cout << "Status:";
        switch (status)
        {
        case FRESHMAN:
            cout << "Freshman";
            break;
        case SOPHOMORE:
            cout << "Sophomore";
            break;
        case JUNIOR:
            cout << "Junior";
            break;
        case SENIOR:
            cout << "Senior";
            break;
        }
        cout << endl;
    }
};

class MyDate
{
    int year, month, day;

public:
    MyDate(int y = 1900, int m = 1, int d = 1)
        : year(y), month(m), day(d) {}
    void print() const { cout << year << "-" << month << "-" << day; }
};

class Employee : public Person
{
protected:
    int salary;
    MyDate dateHired;

public:
    Employee(string n, char s, int sal, MyDate d)
        : Person(n, s), salary(sal), dateHired(d) {}
    void print() const
    {
        Person::print();
        cout << "Salary:" << salary << ", Hire date:";
        dateHired.print();
        cout << endl;
    }
};

enum Rank
{
    PROFESSOR,
    ASSOCIATE_PROFESSOR,
    LECTURER
};

class Faculty : public Employee
{
    Rank rank;

public:
    Faculty(string n, char s, int sal, MyDate d, Rank r)
        : Employee(n, s, sal, d), rank(r) {}
    void print() const
    {
        Employee::print();
        cout << "Rank:";
        switch (rank)
        {
        case PROFESSOR:
            cout << "Professor";
            break;
        case ASSOCIATE_PROFESSOR:
            cout << "Associate professor";
            break;
        case LECTURER:
            cout << "Lecturer";
            break;
        }
        cout << endl;
    }
};

enum Headship
{
    PRESIDENT,
    DEAN,
    DEPARTMENT_CHAIRMAN
};

class Staff : public Employee
{
    Headship headship;

public:
    Staff(string n, char s, int sal, MyDate d, Headship h)
        : Employee(n, s, sal, d), headship(h) {}
    void print() const
    {
        Employee::print();
        cout << "Headship:";
        switch (headship)
        {
        case PRESIDENT:
            cout << "President";
            break;
        case DEAN:
            cout << "Dean";
            break;
        case DEPARTMENT_CHAIRMAN:
            cout << "Department chairman";
            break;
        }
        cout << endl;
    }
};

int main()
{
    Person person("ZhangSan", 'M');
    Student student("LiSi", 'F', FRESHMAN);
    MyDate date(2012, 3, 1);
    Employee employee("WangWu", 'M', 5000, date);
    Faculty faculty("LiuLiu", 'M', 10000, date, PROFESSOR);
    Staff staff("QianQi", 'M', 8000, date, DEPARTMENT_CHAIRMAN);
    person.print();
    student.print();
    employee.print();
    faculty.print();
    staff.print();
    return 0;
}