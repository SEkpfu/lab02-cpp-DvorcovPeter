#include <iostream>
using namespace std;

int main()
{
    int n;
    int d=2;
    int s=1;
    cin >> n;
    if(n%2!=0){
        return 0;
    }
    while(s<=n){
            while (d<=n){
        cout << "o " << "* ";
        d+=2;
    }
    cout << endl;
    d=2;
    s+=1;
    }
}