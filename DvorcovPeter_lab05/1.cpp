#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a[10];
    int s = 0;
    int b[10] = {-2, 4, 3, -7, 0, 12, 9, -2, 4, 2};

    for (int k = 0; k < 10; k++)
    {
        cin >> a[k];
        s += a[k];
    }
    double avg = (double)(s) / 10;
    cout << "второй " << a[1] << endl;
    cout << "последний " << a[9] << endl;
    cout << "нечет элементы " << a[1] << " ";
    cout << a[1] << " ";
    cout << a[3] << " ";
    cout << a[5] << " ";
    cout << a[7] << " ";
    cout << a[9] << endl;
    cout << "Средн ареф: " << avg << endl;
    cout << "пары сумм: " << endl;
    cout << a[0] << " + " << b[0] << " = " << a[0] + b[0] << endl;
    cout << a[1] << " + " << b[1] << " = " << a[1] + b[1] << endl;
    cout << a[2] << " + " << b[2] << " = " << a[2] + b[2] << endl;
    cout << a[3] << " + " << b[3] << " = " << a[3] + b[3] << endl;
    cout << a[4] << " + " << b[4] << " = " << a[4] + b[4] << endl;
    cout << a[5] << " + " << b[5] << " = " << a[5] + b[5] << endl;
    cout << a[6] << " + " << b[6] << " = " << a[6] + b[6] << endl;
    cout << a[7] << " + " << b[7] << " = " << a[7] + b[7] << endl;
    cout << a[8] << " + " << b[8] << " = " << a[8] + b[8] << endl;
    cout << a[9] << " + " << b[9] << " = " << a[9] + b[9] << endl;
    cout << a[10] << " + " << b[10] << " = " << a[10] + b[10];
}