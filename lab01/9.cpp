#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
    double Sec, Min, Hour, Left;
    cout << "Sec = ";
    cin >> Sec;
    Min = int(Sec/60)%60;
    cout << "Min = " << Min << endl;
    Hour= int(Sec)/3600;
    cout << "Hour = " << Hour << endl;
    Left= fmod (Sec, 60);
    cout << "Left = " << Left << endl;
    return 0;
}