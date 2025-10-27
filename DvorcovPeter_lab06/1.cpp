#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int r = 2;
    const int c = 3;
    int a[r][c];

    srand(time(0));

    cout << "массив a:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            a[i][j] = rand() % 30;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    int sum_all = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum_all += a[i][j];
        }
    }

    cout << "\nсумма всех элементов: " << sum_all << endl;
    if (sum_all % 2 == 0)
        cout << "сумма чётная.\n";
    else
        cout << "сумма нечётная.\n";

    int sum_range = 0;
    int prod_range = 1;
    bool f = false;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] >= 2 && a[i][j] <= 9)
            {
                sum_range += a[i][j];
                prod_range *= a[i][j];
                f = true;
            }
        }
    }

    if (f)
    {
        cout << "\nсумма элементов из диапазона [2, 9]: " << sum_range << endl;
        cout << "произведение элементов из диапазона [2, 9]: " << prod_range << endl;
    }
    else
    {
        cout << "\nв массиве нет элементов из диапазона [2, 9].\n";
    }

    return 0;
}
