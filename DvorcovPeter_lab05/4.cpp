#include <iostream>
using namespace std;

int main()
{
    const int n = 10;
    int a[n];
    int w;

    cout << "введите 10 целых чисел:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "введите число w: ";
    cin >> w;

    bool f = false;

    cout << "\nпары элементов, сумма которых равна " << w << ":\n";

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == w)
            {
                cout << "a[" << i << "] = " << a[i]
                     << ", a[" << j << "] = " << a[j]
                     << " (сумма = " << a[i] + a[j] << ")\n";
                f = true;
            }
        }
    }

    if (!f)
        cout << "таких пар нет.\n";

    return 0;
}