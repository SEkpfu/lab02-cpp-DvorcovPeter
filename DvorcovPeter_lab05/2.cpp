#include <iostream>
using namespace std;

int main()
{
    const int n = 8;
    int f[n];

    f[0] = 0;
    f[1] = 1;

    for (int k = 2; k < n; k++)
    {
        f[k] = f[k - 2] + f[k - 1];
    }

    for (int k = 0; k < n; k++)
    {
        cout << f[k] << " ";
    }

    cout << endl;
    return 0;
}