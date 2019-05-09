#include "Rational.h"

void Rational::set(double a, double b)
{
    numerator = a;
    denominator = b;
}
double Rational::getNumerator() const
{
    return numerator;
}
double Rational::getDenominator() const
{
    return denominator;
}
Rational::Rational(double a, double b)
{
    set(a, b);
}
Rational::Rational(const Rational &a)
{
    numerator = a.numerator;
    denominator = a.denominator;
}
Rational Rational::operator+(const Rational &a) const
{
    Rational temp;

    temp.numerator = numerator * a.denominator + denominator * a.numerator;
    temp.denominator = denominator * a.denominator;

    return temp;
}
Rational Rational::operator*(const Rational &a) const
{
    Rational temp;

    temp.numerator = numerator * a.numerator;
    temp.denominator = denominator * a.denominator;

    return temp;
}
Rational Rational::operator/(const Rational &a) const
{
    Rational temp;

    temp.numerator = numerator * a.denominator;
    temp.denominator = denominator * a.numerator;

    return temp;
}
bool Rational::operator==(const Rational &a) const
{
    return(numerator * a.denominator == denominator * a.numerator);
}
Rational Rational::operator++()
{
    numerator = numerator + denominator;

    return *this;
}
bool operator<=(const Rational &a, const Rational &b)
{
    return(a.numerator * b.denominator <= a.denominator * b.numerator);
}
Rational operator++(Rational &a, int b)
{
    Rational temp = a;

    a.numerator = a.numerator + a.denominator;

    return temp;
}
ostream& operator<<(ostream &a, const Rational& b)
{
    a<<b.numerator<<"/"<<b.denominator;

    return a;
}
istream& operator>>(istream &a, Rational& b)
{
    a>>b.numerator>>b.denominator;

    return a;
}
