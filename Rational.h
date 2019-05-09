#ifndef RATIONAL_H_INCLUDED
#define RATIONAL_H_INCLUDED

#include <iostream>
using namespace std;

class Rational
{
    friend bool operator<=(const Rational &, const Rational &);
    friend Rational operator++(Rational &, int);
    friend ostream& operator<<(ostream&, const Rational&);
    friend istream& operator>>(istream&, Rational&);
private:
    double numerator, denominator;
public:
    void set(double, double);
    double getNumerator() const;
    double getDenominator() const;
    Rational(double = 0, double = 0);
    Rational(const Rational &);
    Rational operator+(const Rational &) const;
    Rational operator*(const Rational &) const;
    Rational operator/(const Rational &) const;
    bool operator==(const Rational &) const;
    Rational operator++();
};

#endif // RATIONAL_H_INCLUDED
