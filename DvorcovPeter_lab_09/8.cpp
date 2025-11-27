#include <iostream>
#include <cmath>
using namespace std;

double Root(double (*f)(double), double a, double b, double eps)
{
    double fa = f(a);
    double fb = f(b);

    if (fa * fb > 0)
    {
        cout << "f(a) и f(b) должны иметь разные знаки.\n";
        return NAN;
    }

    while (fabs(b - a) > eps)
    {
        double m = (a + b) / 2.0;
        double fm = f(m);

        if (fm == 0)
            return m;

        if (fa * fm < 0)
        {
            b = m;
            fb = fm;
        }
        else
        {
            a = m;
            fa = fm;
        }
    }
    return (a + b) / 2.0;
}

double f1(double x)
{
    return x * sin(x) - 0.5;
}

double f2(double x)
{
    return log10(x * x - 3 * x + 2);
}

double f3(double x)
{
    return 0.5 * tan((2.0 / 3.0) * (x + M_PI / 4.0)) - 1;
}

int main()
{
    double eps = 0.0001;

    cout << "x*sin(x) - 0.5 = 0 на [0, pi]\n";
    cout << "корень = " << Root(f1, 0, M_PI, eps) << "\n\n";

    cout << "lg(x^2 - 3x + 2) = 0 на [0, 0.9]\n";
    cout << "корень = " << Root(f2, 0, 0.9, eps) << "\n\n";

    cout << "lg(x^2 - 3x + 2) = 0 на [2.1, 5]\n";
    cout << "корень = " << Root(f2, 2.1, 5, eps) << "\n\n";

    cout << "0.5*tg( (2/3)*(x + pi/4) ) - 1 = 0 на [pi, 2pi]\n";
    cout << "корень = " << Root(f3, M_PI, 2 * M_PI, eps) << "\n\n";

    return 0;
}