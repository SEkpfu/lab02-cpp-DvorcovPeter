#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int n = 7;
    int x[n], y[n];

    srand(time(0));

    for (int i = 0; i < n; i++)
    {
        x[i] = rand() % 20;
        y[i] = rand() % 20;
    }

    cout << "массив x: ";
    for (int i = 0; i < n; i++)
        cout << x[i] << " ";
    cout << endl;

    cout << "массив y: ";
    for (int i = 0; i < n; i++)
        cout << y[i] << " ";
    cout << endl;

    int c[3 * n];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        c[k++] = x[i];
        c[k++] = y[i];
        c[k++] = y[i] + x[i];
    }

    cout << "массив c: ";
    for (int i = 0; i < 3 * n; i++)
        cout << c[i] << " ";
    cout << endl;

    int d[2 * n];
    k = 0;
    for (int i = 0; i < n; i++)
    {
        d[k++] = x[n - 1 - i];
        if (i < n - 1)
            d[k++] = y[i] + x[i + 1];
        else
            d[k++] = y[n - 1] + x[0];
    }

    cout << "массив d: ";
    for (int i = 0; i < 2 * n; i++)
        cout << d[i] << " ";
    cout << endl;

    return 0;
}