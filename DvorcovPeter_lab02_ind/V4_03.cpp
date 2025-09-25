#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;

    if (x >= -3 && x * x + y * y <= 36 && y >= -6 && y <= 6)
    {
        cout << "+";
    }
    else
    {
        cout << "-";
    }

    return 0;
}