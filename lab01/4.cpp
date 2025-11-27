#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    double V, R;
    const double PI = 3.141592653589793238463;
    cout << "Введите радиус \n";
    cout << "R= ";
    cin >> R;

    V = (4 / 3) * PI * (R * R * R);
    cout << "V = " << V;
    return 0;
}