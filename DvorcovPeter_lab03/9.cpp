#include <iostream>
using namespace std;

int main()
{
    int n=1;
    int maxx=0;
    int k=1;
    int l=0;

    while(n!=0){
        cin >> n;
        l+=1;
        if(n==maxx){
            k+=1;
        }
        if(n>maxx){
            maxx=n;
            k=1;
        }
        if(n==0){
            cout << "кол-во элементов: " << l << endl;
            cout << "кол-во наибольших: " << k;
        }
        }
    return 0;
    }
