#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double rub, hour, extra, vsego, nalog, naruki;

    cout << "rub= ";
    cin >> rub;
    cout << "hour= ";
    cin >> hour;
    cout << "extra=";
    cin >> extra;
    cout << "nalog=";
    cin >> nalog;
    extra=1+extra/100;
    vsego=rub*hour*extra;
    nalog=vsego*(nalog/100);
    naruki=vsego-nalog;
    cout << "\naglog = " << nalog ;
    cout << "\nvsego = " << vsego <<"\n";
    cout << "naruki = " << naruki ;
    return 0;
}