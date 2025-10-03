#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double rub, hour, extra, vsego;

    cout << "rub= ";
    cin >> rub;
    cout << "hour= ";
    cin >> hour;
    cout << "extra=";
    cin >> extra;
    vsego=rub*hour+extra;
    cout << "vsego = " << vsego;
    return 0;
}
