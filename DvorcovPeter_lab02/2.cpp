#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int x;
    cout << "Введите целое число: ";
    cin >> x;

    if (x > 0)
        cout << "Число положительное\n";
    else if (x < 0)
        cout << "Число отрицательное\n";
    else
        cout << "Число равно нулю\n";

    if (x % 2 == 0)
        cout << "Число четное\n";
    else
        cout << "Число нечетное\n";

    return 0;
}