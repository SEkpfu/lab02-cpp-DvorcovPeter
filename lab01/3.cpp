#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    double tc, tf, tk;
    cout << "Введите температуру \n";
    cout << "tc= ";
    cin >> tc;

    tf = (9 / 5) * (tc) + 32;
    cout << "tf = " << tf;
    tk = tc + 273;
    cout << "\ntk= " << tk;
    return 0;
}