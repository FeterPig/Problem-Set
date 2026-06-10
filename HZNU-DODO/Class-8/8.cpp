#include <iostream>
#include <stdexcept>
using namespace std;

class Rational
{
private:
    int numerator_, denominator_;

    int gcd(int a, int b)
    {
        a = abs(a);
        b = abs(b);
        return b == 0 ? a : gcd(b, a % b);
    }

    int compare(Rational a, Rational b) const
    {
        if (a.getNumerator() * b.getDenominator() < b.getNumerator() * a.getDenominator())
        {
            return -1;
        }
        else if (a.getNumerator() * b.getDenominator() > b.getNumerator() * a.getDenominator())
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

public:
    Rational(int numerator = 0, int denominator = 1) : numerator_(numerator), denominator_(denominator)
    {
        int g = gcd(numerator_, denominator_);
        numerator_ /= g;
        denominator_ /= g;

        if (denominator_ < 0)
        {
            numerator_ = -numerator_;
            denominator_ = -denominator_;
        }
    }

    int getNumerator() const { return numerator_; }
    int getDenominator() const { return denominator_; }

    Rational operator+(Rational other) const
    {
        return Rational(numerator_ * other.getDenominator() + other.getNumerator() * denominator_, denominator_ * other.getDenominator());
    }
    Rational operator-(Rational other) const
    {
        return Rational(numerator_ * other.getDenominator() - other.getNumerator() * denominator_, denominator_ * other.getDenominator());
    }
    Rational operator*(Rational other) const
    {
        return Rational(numerator_ * other.getNumerator(), denominator_ * other.getDenominator());
    }
    Rational operator/(Rational other) const
    {
        return Rational(numerator_ * other.getDenominator(), denominator_ * other.getNumerator());
    }

    Rational operator++()
    {
        numerator_ += denominator_;
        return *this;
    }
    Rational operator++(int)
    {
        Rational temp(*this);
        numerator_ += denominator_;
        return temp;
    }

    Rational operator--()
    {
        numerator_ -= denominator_;
        return *this;
    }
    Rational operator--(int)
    {
        Rational temp(*this);
        numerator_ -= denominator_;
        return temp;
    }

    Rational operator+=(Rational other)
    {
        return *this = *this + other;
    }
    Rational operator-=(Rational other)
    {
        return *this = *this - other;
    }
    Rational operator*=(Rational other)
    {
        return *this = *this * other;
    }
    Rational operator/=(Rational other)
    {
        return *this = *this / other;
    }

    bool operator<(Rational other) const
    {
        return compare(*this, other) == -1;
    }
    bool operator<=(Rational other) const
    {
        return compare(*this, other) == -1;
    }
    bool operator>(Rational other) const
    {
        return compare(*this, other) == 1;
    }
    bool operator>=(Rational other) const
    {
        return compare(*this, other) == 1;
    }
    bool operator==(Rational other) const
    {
        return compare(*this, other) == 0;
    }
    bool operator!=(Rational other) const
    {
        return compare(*this, other) != 0;
    }

    operator double() const
    {
        return double(numerator_) / denominator_;
    }

    friend istream &operator>>(istream &is, Rational &r)
    {
        int numerator, denominator;
        is >> numerator >> denominator;
        r = Rational(numerator, denominator);
        return is;
    }
    friend ostream &operator<<(ostream &os, const Rational &r)
    {
        if (r.getDenominator() == 1)
        {
            os << r.getNumerator();
        }
        else
        {
            os << r.getNumerator() << "/" << r.getDenominator();
        }
        return os;
    }
};

int main()
{
    Rational a, b;
    cin >> a;
    cin >> b;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << a << "+" << b << "=" << a + b << endl;
    cout << a << "-" << b << "=" << a - b << endl;
    cout << a << "*" << b << "=" << a * b << endl;
    cout << a << "/" << b << "=" << a / b << endl;
    cout << boolalpha << a << "<" << b << "=" << (a < b) << endl;
    cout << boolalpha << a << ">" << b << "=" << (a > b) << endl;
    cout << boolalpha << a << "==" << b << "=" << (a == b) << endl;
    cout << boolalpha << a << "!=" << b << "=" << (a != b) << endl;
    Rational c(1, 2);
    cout << "c=" << c << endl;
    cout << 2.5 << "+" << c << "=" << (2.5 + c) << endl;
    cout << ++c << endl;
    cout << c << endl;
    cout << c++ << endl;
    cout << c << endl;
    cout << (c += b) << endl;
    return 0;
}