#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const string GREEN = "\033[32m";
const string RESET = "\033[0m";

void printArray(int a[], int n, bool moved[])
{
    for (int i = 0; i < n; i++)
    {
        if (moved[i])
            cout << GREEN << a[i] << RESET << " ";
        else
            cout << a[i] << " ";
    }
    cout << "\n";
}

void selectionSort(int a[], int n, bool moved[])
{
    for (int i = 0; i < n; i++)
    {
        if (i % 13 != 0)
            continue;

        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (j % 13 != 0)
                continue;
            if (a[j] < a[minIdx])
                minIdx = j;
        }
        if (minIdx != i)
        {
            swap(a[i], a[minIdx]);
            moved[i] = moved[minIdx] = true;
        }
    }
}

void insertionSort(int a[], int n, bool moved[])
{
    for (int i = 13; i < n; i += 13)
    {
        int key = a[i];
        int j = i - 13;

        while (j >= 0 && a[j] > key)
        {
            a[j + 13] = a[j];
            moved[j] = moved[j + 13] = true;
            j -= 13;
        }
        a[j + 13] = key;
    }
}

void bubbleSort(int a[], int n, bool moved[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j + 13 < n; j++)
        {

            if (j % 13 != 0 || (j + 13) % 13 != 0)
                continue;

            if (a[j] > a[j + 13])
            {
                swap(a[j], a[j + 13]);
                moved[j] = moved[j + 13] = true;
            }
        }
    }
}

int main()
{
    const int n = 100;
    int a[n];
    bool moved[n];

    srand(time(0));

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 10000;
        moved[i] = false;
    }

    cout << "исходный массив:\n";
    printArray(a, n, moved);

    fill(moved, moved + n, false);
    selectionSort(a, n, moved);
    cout << "\nпосле сортировки выбором:\n";
    printArray(a, n, moved);

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 10000;
        moved[i] = false;
    }

    insertionSort(a, n, moved);
    cout << "\nпосле сортировки вставками:\n";
    printArray(a, n, moved);

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 10000;
        moved[i] = false;
    }

    bubbleSort(a, n, moved);
    cout << "\nпосле сортировки пузырьком:\n";
    printArray(a, n, moved);

    return 0;
}