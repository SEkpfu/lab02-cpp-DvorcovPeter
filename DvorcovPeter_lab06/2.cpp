#include <iostream>
using namespace std;

int main()
{
    const int r = 3;
    const int c = 4;
    int a[r][c];

    cout << "введите элементы массива:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    int min_v = a[0][0];
    int min_r = 0, min_c = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] < min_v)
            {
                min_v = a[i][j];
                min_r = i;
                min_c = j;
            }
        }
    }

    cout << "\nнаименьший элемент: " << min_v
         << " (строка " << min_r << ", столбец " << min_c << ")\n";

    for (int i = 0; i < r; i++)
    {
        int t = a[i][min_c];
        a[i][min_c] = a[i][c - 1];
        a[i][c - 1] = t;
    }

    cout << "\nмассив после обмена столбцов:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    int x[c] = {0};

    for (int j = 0; j < c; j++)
    {
        int sum = 0;
        for (int i = 0; i < r; i++)
        {
            if (a[i][j] > 0)
                sum += a[i][j];
        }
        x[j] = sum;
    }

    cout << "\nмассив x :\n";
    for (int j = 0; j < c; j++)
    {
        cout << "x[" << j << "] = " << x[j] << "\n";
    }

    for (int j = 0; j < c; j++)
    {
        a[0][j] = min_v;
    }

    cout << "\nмассив после замены первой строки:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}