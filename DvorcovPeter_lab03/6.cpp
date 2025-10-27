#include <iostream>
using namespace std;

int main()
{
    int k = 0;
    int a = 0;
    int n;

    while (true)
    {
        cin >> n;
        if (n == 0)
            break;

        k += 1;
        if ((n & 1) == 0)
        {
            a += 1;
        }
    }

    cout << "Чисел:" << k << " " << "четных:" << a;
    return 0;
}