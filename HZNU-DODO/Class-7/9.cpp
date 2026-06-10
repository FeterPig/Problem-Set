#include <iostream>
using namespace std;

class Rational
{
private:
    int numerator_, denominator_;
    int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

public:
    Rational(int numerator = 0, int denominator = 1) : numerator_(numerator), denominator_(denominator) { enEsay(); }

    void enEsay()
    {
        int tmp_gcd = gcd(numerator_, denominator_);
        numerator_ /= tmp_gcd;
        denominator_ /= tmp_gcd;
        if (denominator_ < 0)
        {
            numerator_ *= -1;
            denominator_ *= -1;
        }
    }

    int getNumerator() { return numerator_; }
    int getDenominator() { return denominator_; }

    Rational add(const Rational &b)
    {
        int numerator = numerator_ * b.denominator_ + b.numerator_ * denominator_;
        int denominator = denominator_ * b.denominator_;
        return Rational(numerator, denominator);
    }
    Rational subtract(const Rational &b)
    {
        int numerator = numerator_ * b.denominator_ - b.numerator_ * denominator_;
        int denominator = denominator_ * b.denominator_;
        return Rational(numerator, denominator);
    }
    Rational multiply(const Rational &b)
    {
        int numerator = numerator_ * b.numerator_;
        int denominator = denominator_ * b.denominator_;
        return Rational(numerator, denominator);
    }
    Rational divide(const Rational &b)
    {
        int numerator = numerator_ * b.denominator_;
        int denominator = denominator_ * b.numerator_;
        return Rational(numerator, denominator);
    }

    bool equals(const Rational &b) { return (numerator_ == b.numerator_) && (denominator_ == b.denominator_); }

    double doubleValue() { return static_cast<double>(numerator_) / denominator_; }

    void print()
    {
        if (denominator_ == 1)
        {
            cout << numerator_ << endl;
        }
        else if (denominator_ == 0)
        {
            cout << "Inf" << endl;
        }
        else
        {
            cout << numerator_ << "/" << denominator_ << endl;
        }
    }
};

int main()
{
    int x, y;
    char ignore;
    cin >> x >> ignore >> y;
    Rational a(x, y);
    cin >> x >> ignore >> y;
    Rational b(x, y);
    Rational c;
    a.print();
    b.print();
    c = a.add(b);
    c.print();
    c = a.subtract(b);
    c.print();
    c = a.multiply(b);
    c.print();
    c = a.divide(b);
    c.print();
    cout << (a.equals(b) ? "a==b" : "a!=b") << endl;
    cout << b.doubleValue() << endl;
    return 0;
}