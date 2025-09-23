#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double A, B, C, V, S;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    cout << "C = ";
    cin >> C;
    V = A*B*C;
    cout << "V = " << V << endl;
    S= 2*(A*B+B*C+A*C);
    cout << "S = " << S << endl;
    return 0;
}