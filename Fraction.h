#pragma once

namespace FractionSpace {
    class Fraction {
    private:
        int numerator;
        int denominator;

    public:
        Fraction(int num, int denom);

        Fraction operator+(const Fraction& other) const;
        Fraction operator-(const Fraction& other) const;
        Fraction operator*(const Fraction& other) const;
        Fraction operator/(const Fraction& other) const;

        void print() const;
    };
}

