#include <iostream>
using namespace std;

void f()
{
    int i;
    cin >> i;

    if (i == 0)
        return;

    f();
    cout << i << " ";
}

int main()
{
    cout << "введите числа: ";
    f();
    return 0;
}