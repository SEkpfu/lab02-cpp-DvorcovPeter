#include <iostream>
using namespace std;

int sum1(int a, int b)
{
    if (b == 0)
        return a;
    return sum1(a + 1, b - 1);
}

int main()
{
    int a;
    int b;
    cin >> a >> b;
    cout << sum1(a, b);
}