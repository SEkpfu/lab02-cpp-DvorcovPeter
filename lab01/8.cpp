#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double A, A1, A2;
    cout << "A = ";
    cin >> A;
    A1 = int(A)/100;
    cout << "A1 = " << A1 << endl;
    A2= int(A)%100;
    cout << "A2 = " << A2 << endl;
    return 0;
}