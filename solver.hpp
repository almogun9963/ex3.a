//
// Authors: Ariel Yechezkel & Almog Amiga
//

#ifndef SOLVER_SOLVER_HPP
#define SOLVER_SOLVER_HPP
#pragma once
#include <complex>
#include <string>
using namespace std;
namespace solver
{
    class RealVariable
    {
    public:
        RealVariable()
        {
            ;
        }

        friend RealVariable operator*(const RealVariable& x, const double num);
        friend RealVariable operator*(const double num, const RealVariable& x);
        friend RealVariable operator*(const RealVariable& rv1, const RealVariable& rv2);

        friend RealVariable operator/(const RealVariable& x, const double num);
        friend RealVariable operator/(const RealVariable& rv1, const RealVariable& rv2);

        friend RealVariable operator+(const RealVariable& x, const double num);
        friend RealVariable operator+(const double num, const RealVariable& x);
        friend RealVariable operator+(const RealVariable& rv1, const RealVariable& rv2);

        friend RealVariable operator-(const RealVariable& x, const double num);
        friend RealVariable operator-(const double num, const RealVariable& x);
        friend RealVariable operator-(const RealVariable& rv1, const RealVariable& rv2);

        friend RealVariable operator^(const RealVariable& x, const double num);

        friend RealVariable operator==(const RealVariable& x, const double num);
        friend RealVariable operator==(const double num, const RealVariable& x);
        friend RealVariable operator==(const RealVariable& rv1, const RealVariable& rv2);
    };

    class ComplexVariable
    {
    public:
        ComplexVariable()
        {
            ;
        }

        friend ComplexVariable operator*(const ComplexVariable& x, const complex<double> num);
        friend ComplexVariable operator*(const complex<double> num, const ComplexVariable& x);
        friend ComplexVariable operator*(const ComplexVariable& cv1, const ComplexVariable& cv2);

        friend ComplexVariable operator/(const ComplexVariable& x, const complex<double> num);
        friend ComplexVariable operator/(const ComplexVariable& cv1, const ComplexVariable& cv2);

        friend ComplexVariable operator+(const ComplexVariable& x, const complex<double> num);
        friend ComplexVariable operator+(const complex<double> num, const ComplexVariable& x);
        friend ComplexVariable operator+(const ComplexVariable& cv1, const ComplexVariable& cv2);

        friend ComplexVariable operator-(const ComplexVariable& x, const complex<double> num);
        friend ComplexVariable operator-(const complex<double> num, const ComplexVariable& x);
        friend ComplexVariable operator-(const ComplexVariable& cv1, const ComplexVariable& cv2);

        friend ComplexVariable operator^(const ComplexVariable& x, const complex<double> num);

        friend ComplexVariable operator==(const ComplexVariable& x, const complex<double> num);
        friend ComplexVariable operator==(const complex<double> num, const ComplexVariable& x);
        friend ComplexVariable operator==(const ComplexVariable& cv1, const ComplexVariable& cv2);
    };

    double solve(const RealVariable& x);
    complex<double> solve(const ComplexVariable& x);

}
#endif //SOLVER_SOLVER_HPP
