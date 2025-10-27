#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Введите количество орехов: ";
    cin >> n;

    string ending;
    if (n % 100 >= 11 && n % 100 <= 14)
    {
        ending = "ов";
    }
    else
    {
        int lastDigit = n % 10;
        if (lastDigit == 1)
        {
            ending = "";
        }
        else if (lastDigit >= 2 && lastDigit <= 4)
        {
            ending = "а";
        }
        else
        {
            ending = "ов";
        }
    }

    cout << "Бурундук закопал " << n << "орех" << ending << endl;

    return 0;
}