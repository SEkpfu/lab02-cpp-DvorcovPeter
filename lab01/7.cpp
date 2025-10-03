#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double A, B, A1, B1, C;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    C = (int(A) % 10) + (int(B) % 10);
    cout << "C = " << C << endl;
    return 0;
}