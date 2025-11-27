#include <iostream>
using namespace std;

int multisum(int a, int b)
{
    if (b == 0)
        return a;
    if (b > 0)
        return a + multisum(a, b - 1);
}

int main()
{
    int a;
    int b;
    cin >> a >> b;
    cout << multisum(a, b);
}