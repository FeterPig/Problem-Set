#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class NegativeNumberException
{
private:
    string message_;

public:
    NegativeNumberException() { message_ = "Invalid argument!"; }
    NegativeNumberException(string message) { message_ = message; }
    string what() { return message_; }
};

double squareRoot(double value)
{
    if (value < 0)
    {
        throw NegativeNumberException("Invalid argument!");
    }
    return sqrt(value);
}

int main()
{
    double value;
    cin >> value;
    try
    {
        cout << squareRoot(value) << endl;
    }
    catch (NegativeNumberException &ex)
    {
        cout << ex.what() << endl;
    }
    return 0;
}