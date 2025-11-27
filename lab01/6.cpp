#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double R, H, V, S;
    cout << "R = ";
    cin >> R;
    cout << "H = ";
    cin >> H;
    S = 2 * M_PI * R * H;
    V = M_PI * (R * R) * H;
    cout << "S = " << S << endl;
    cout << "V = " << V;
    return 0;
}
