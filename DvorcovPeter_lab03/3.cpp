#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    int a=1;
    int b=0;
    int s;
    cout << "число";
    cin >> n;
    while (b!=2*n)
    {
        b+=2;
        s=s+(1/b);
    }
    cout << "S= " << s;
}