#include <iostream>
using namespace std;
int main()
{
    int negative=0;
    int twonumsum=0;
    int min;
    int i=0;
    int number;

    while (i<=7)
    {
        i+=1;
        cout << "число";
        cin >> number;
        
        if (number<0)
            negative+=1;
        if ((number>=10 && number<=99) || (number>= -99 && number<= -10))
            twonumsum=twonumsum+number;
        if (min>number)
            min=number;
    }
    
    cout << "Min: " << min << endl;
    cout << "negative: " << negative << endl;
    cout << "twonumsum: " << twonumsum << endl;


    }