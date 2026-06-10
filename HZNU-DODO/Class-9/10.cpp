#include <iostream>
#include <string>
using namespace std;

class Employee
{
    string name;

public:
    Employee(string n) : name(n) {}
    string getName() const { return name; }
    virtual void show() const = 0;
    virtual double earnings() const = 0;
};

class Boss : public Employee
{
    double weeklySalary;

public:
    Boss(string n, double ws) : Employee(n), weeklySalary(ws) {}
    void setWeeklySalary(double ws) { weeklySalary = ws; }
    void show() const { cout << "Boss: " << getName() << endl; }
    double earnings() const { return weeklySalary; }
};

class CommissionWorker : public Employee
{
    double salary, commission;
    int quantity;

public:
    CommissionWorker(string n, double s, double c, double q)
        : Employee(n), salary(s), commission(c), quantity((int)q) {}
    void setSalary(double s) { salary = s; }
    void setCommission(double c) { commission = c; }
    void setQuantity(int q) { quantity = q; }
    void show() const { cout << "Commission Worker: " << getName() << endl; }
    double earnings() const { return salary + commission * quantity; }
};

class PieceWorker : public Employee
{
    double wagePerPiece;
    int quantity;

public:
    PieceWorker(string n, double wp, double q)
        : Employee(n), wagePerPiece(wp), quantity((int)q) {}
    void setWage(double wp) { wagePerPiece = wp; }
    void setQuantity(int q) { quantity = q; }
    void show() const { cout << "Piece Worker: " << getName() << endl; }
    double earnings() const { return wagePerPiece * quantity; }
};

class HourlyWorker : public Employee
{
    double wage, hours;

public:
    HourlyWorker(string n, double w, double h) : Employee(n), wage(w), hours(h) {}
    void setWage(double w) { wage = w; }
    void setHours(double h) { hours = h; }
    void show() const { cout << "Hourly Worker: " << getName() << endl; }
    double earnings() const { return wage * hours; }
};

int main()
{
    string name;
    double weeklySalary, salary, commission, quantity, wagePerPiece, wage, hours;
    cin >> name >> weeklySalary;
    Boss b(name, weeklySalary);
    cin >> name >> salary >> commission >> quantity;
    CommissionWorker c(name, salary, commission, quantity);
    cin >> name >> wagePerPiece >> quantity;
    PieceWorker p(name, wagePerPiece, quantity);
    cin >> name >> wage >> hours;
    HourlyWorker h(name, wage, hours);
    Employee *ref; // 基类指针
    ref = &b;
    ref->show();
    cout << "Earned: $" << ref->earnings() << endl;
    ref = &c;
    ref->show();
    cout << "Earned: $" << ref->earnings() << endl;
    ref = &p;
    ref->show();
    cout << "Earned: $" << ref->earnings() << endl;
    ref = &h;
    ref->show();
    cout << "Earned: $" << ref->earnings() << endl;
    return 0;
}