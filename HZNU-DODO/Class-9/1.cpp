#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    int numberOfDoors;
    int numberOfCylinders;
    string color;
    double fuelLevel;
    int transmissionType;
    string className;

public:
    Vehicle(int d, int c, string col, double f, int t)
        : numberOfDoors(d), numberOfCylinders(c), color(col), fuelLevel(f), transmissionType(t), className("Vehicle") {}

    int getNumberOfDoors() const { return numberOfDoors; }
    int getNumberOfCylinders() const { return numberOfCylinders; }
    string getColor() const { return color; }
    double getFuelLevel() const { return fuelLevel; }
    int getTransmissionType() const { return transmissionType; }
    string getClassName() const { return className; }

    void setColor(string c) { color = c; }
    void setFuelLevel(double f) { fuelLevel = f; }
    void setClassName(string n) { className = n; }

    void print(ostream &os) const
    {
        os << className << endl;
        os << "Number of doors:" << numberOfDoors << endl;
        os << "Number of cylinders:" << numberOfCylinders << endl;
        os << "Transmission type:" << (transmissionType == 1 ? "Automatic" : "Manual") << endl;
        os << "Color:" << color << endl;
        os << "Fuel level:" << fuelLevel << endl;
    }

    friend ostream &operator<<(ostream &os, const Vehicle &v)
    {
        v.print(os);
        return os;
    }
};

class Taxi : public Vehicle
{
    bool customers;

public:
    Taxi(int d, int c, string col, double f, int t, bool cust)
        : Vehicle(d, c, col, f, t), customers(cust) { setClassName("Taxi"); }

    bool hasCustomers() const { return customers; }
    void setCustomers(bool c) { customers = c; }

    friend ostream &operator<<(ostream &os, const Taxi &t)
    {
        t.print(os);
        os << (t.customers ? "Has passengers" : "Has no passengers") << endl;
        return os;
    }
};

class Truck : public Vehicle
{
    bool cargo;

public:
    Truck(int d, int c, string col, double f, int t, bool carg)
        : Vehicle(d, c, col, f, t), cargo(carg) { setClassName("Truck"); }

    bool hasCargo() const { return cargo; }
    void setCargo(bool c) { cargo = c; }

    friend ostream &operator<<(ostream &os, const Truck &tr)
    {
        tr.print(os);
        os << (tr.cargo ? "Is carrying cargo" : "Is not carrying cargo") << endl;
        return os;
    }
};

int main()
{
    int doors, cylinders, transmission;
    string color;
    double fuel;
    cin >> doors >> cylinders >> color >> fuel >> transmission;
    Vehicle vehicle(doors, cylinders, color, fuel, transmission);
    cout << vehicle;
    cin >> doors >> cylinders >> color >> fuel >> transmission;
    Taxi taxi(doors, cylinders, color, fuel, transmission, false);
    cout << taxi;
    cin >> doors >> cylinders >> color >> fuel >> transmission;
    Truck truck(doors, cylinders, color, fuel, transmission, true);
    cout << truck;
    return 0;
}