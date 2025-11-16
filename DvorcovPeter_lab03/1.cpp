// #include <iostream>
// using namespace std;
// int main()
// {
//     int tc=0, tf;

//     while (tc <= 100)
//     {
//             tf=(9.0 / 5.0)*tc+32;
//         cout << "Градусы Цельсия" << tc << endl;
//         cout << "Градусы Фарингейта" << tf << endl;
//         tc+=10;
//     }

//     cout << "tc = " << tc;
//     cout << "tf = " << tf;
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     double x=0;
//     double y;

//     do
//     {
//             y=log10(x+1)*sin(x);
//         cout << x << "Значене функции: " << y << endl;
//         x+=0.5;
//     } while (x<=5);

//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     setlocale(LC_ALL, "ru-RU.UTF-8");
//     double x=0;
//     double y;

//     do
//     {
//             y=log10(x+1)*sin(x);
//         cout << x << "Значене функции" << y << endl;
//         x+=0.5;
//     } while (x<=5);

//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     double PI = M_1_PI;
//     double p6 = PI / 6.0;

//     for (double x = 0; x <= 2 * PI; x += p6)
//     {
//         cout << x << "   " << cos(x) << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = -1.5;
    while (x <= 1.5)
    {
        double y;
        if (x > 1.0)
        {
            y = (1.0 + sqrt(fabs(cos(x))));
        }
        else if (x >= -0.5 && x < 1.0)
        {
            y = (x + 1.0);
        }
        else
        {
            y = (1.0 - x * x);
        }
        cout << "x = " << x << ", y = " << y << endl;
        x += 0.25;
    }
    return 0;
}