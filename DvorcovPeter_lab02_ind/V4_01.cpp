#include <iostream>
#include <string>
using namespace std;

int main()
{
    string lang;
    int x;
    cin >> lang >> x;

    if (lang == "RUS")
    {
        switch (x)
        {
        case 1:
            cout << "понедельник";
            break;
        case 2:
            cout << "вторник";
            break;
        case 3:
            cout << "среда";
            break;
        case 4:
            cout << "четверг";
            break;
        case 5:
            cout << "пятница";
            break;
        case 6:
            cout << "суббота";
            break;
        case 7:
            cout << "воскресенье";
            break;
        default:
            cout << "Ошибка";
        }
    }
    else if (lang == "ENG")
    {
        switch (x)
        {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Error";
        }
    }
    else
    {
        cout << "Wrong language";
    }

    return 0;
}