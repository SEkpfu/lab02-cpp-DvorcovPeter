// #include <iostream>
// using namespace std;

// int main()
// {
//     setlocale(0, "");
//     double x, f;
//     cout << "Введите x ";
//     cin >> x;

//     if (x <= -2)
//         f = 0;
//     else if (x <= 10)
//         f = x * x + 4 * x + 5;
//     else
//         f = 1.0 / (x * x + 4 * x - 5);

//     cout << "f(x) = " << f << endl;
//     return 0;
// }





// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     setlocale(0, "");
//     double x, f;
//     cout << "Введите x: ";
//     cin >> x;

//     if (x <= -2)
//         f = 0;
//     else if (x <= 0)
//         f = x * x + 4 * x + 5;
//     else
//         f = 1.0 / (x * x + 4 * x - 5);

//     if (isnan(f) || isinf(f))
//         cout << "Ошибка" << endl;
//     else
//         cout << "f(x) = " << f << endl;

//     return 0;
// }