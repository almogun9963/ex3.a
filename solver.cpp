//
// Authors: Ariel Yechezkel & Almog Amiga
//

#include "solver.hpp"
#include <iostream>
#include <string>
#include <complex>
using namespace std;
using namespace solver;

namespace solver
{
    //RealVariable
    RealVariable operator*(const RealVariable& x, const double num) { return x; }
    RealVariable operator*(const double num, const RealVariable& x) { return x; }
    RealVariable operator*(const RealVariable& rv1, const RealVariable& rv2) { return rv1; }

    RealVariable operator/(const RealVariable& x, const double num){ return x; }
    RealVariable operator/(const RealVariable& rv1, const RealVariable& rv2){ return rv1; }

    RealVariable operator+(const RealVariable& x, const double num) { return x; }
    RealVariable operator+(const double num, const RealVariable& x) { return x; }
    RealVariable operator+(const RealVariable& rv1, const RealVariable& rv2) { return rv1; }

    RealVariable operator-(const RealVariable& x, const double num) { return x; }
    RealVariable operator-(const double num, const RealVariable& x) { return x; }
    RealVariable operator-(const RealVariable& rv1, const RealVariable& rv2) { return rv1; }

    RealVariable operator^(const RealVariable& x, const double num){ return x; }

    RealVariable operator==(const RealVariable& x, const double num){ return x; }
    RealVariable operator==(const double num, const RealVariable& x){ return x; }
    RealVariable operator==(const RealVariable& rv1, const RealVariable& rv2){ return rv1; }

    //ComplexVariable
    ComplexVariable operator*(const ComplexVariable& x, const complex<double> num) { return x; }
    ComplexVariable operator*(const complex<double> num, const ComplexVariable& x) { return x; }
    ComplexVariable operator*(const ComplexVariable& cv1, const ComplexVariable& cv2) { return cv1; }

    ComplexVariable operator/(const ComplexVariable& x, const complex<double> num) { return x; }
    ComplexVariable operator/(const ComplexVariable& cv1, const ComplexVariable& cv2) { return cv1; }
    
    ComplexVariable operator+(const ComplexVariable& x, const complex<double> num) { return x; }
    ComplexVariable operator+(const complex<double> num, const ComplexVariable& x) { return x; }
    ComplexVariable operator+(const ComplexVariable& cv1, const ComplexVariable& cv2) { return cv1; }

    ComplexVariable operator-(const ComplexVariable& x, const complex<double> num) { return x; }
    ComplexVariable operator-(const complex<double> num, const ComplexVariable& x) { return x; }
    ComplexVariable operator-(const ComplexVariable& cv1, const ComplexVariable& cv2) { return cv1;

    ComplexVariable operator^(const ComplexVariable& x, const complex<double> num) { return x; }

    ComplexVariable operator==(const ComplexVariable& x, const complex<double> num) { return x; }
    ComplexVariable operator==(const complex<double> num, const ComplexVariable& x) { return x; }
    ComplexVariable operator==(const ComplexVariable& cv1, const ComplexVariable& cv2) { return cv1; }

    //solve
    double solve (const RealVariable& x)
    {
        return 0;
    }
    complex<double> solve (const ComplexVariable& x)
    {
        complex<double> complex1;
        return complex1;
    }
}
