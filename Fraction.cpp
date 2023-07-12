#include "Fraction.h"
#include <iostream>

namespace FractionSpace {
    Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {}

    Fraction Fraction::operator+(const Fraction& other) const {
        int resultNum = numerator * other.denominator + other.numerator * denominator;
        int resultDenom = denominator * other.denominator;
        return Fraction(resultNum, resultDenom);
    }

    Fraction Fraction::operator-(const Fraction& other) const {
        int resultNum = numerator * other.denominator - other.numerator * denominator;
        int resultDenom = denominator * other.denominator;
        return Fraction(resultNum, resultDenom);
    }

    Fraction Fraction::operator*(const Fraction& other) const {
        int resultNum = numerator * other.numerator;
        int resultDenom = denominator * other.denominator;
        return Fraction(resultNum, resultDenom);
    }

    Fraction Fraction::operator/(const Fraction& other) const {
        int resultNum = numerator * other.denominator;
        int resultDenom = denominator * other.numerator;
        return Fraction(resultNum, resultDenom);
    }

    void Fraction::print() const {
        std::cout << numerator << "/" << denominator << std::endl;
    }
}