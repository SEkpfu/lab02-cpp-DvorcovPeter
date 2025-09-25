// #include <iostream>
// using namespace std;

// int main() {
//     setlocale(0, "");
//     double a1, b1, a2, b2, a3, b3;
//     cout << "Введите стороны 1-го прямоугольника: "; cin >> a1 >> b1;
//     cout << "Введите стороны 2-го прямоугольника: "; cin >> a2 >> b2;
//     cout << "Введите стороны 3-го прямоугольника: "; cin >> a3 >> b3;

//     double s1 = a1 * b1;
//     double s2 = a2 * b2;
//     double s3 = a3 * b3;

//     if (s1 > s2 && s1 > s3)
//         cout << "Максимальная площадь у 1-го: " << s1;
//     else if (s2 > s1 && s2 > s3)
//         cout << "Максимальная площадь у 2-го: " << s2;
//     else
//         cout << "Максимальная площадь у 3-го: " << s3;

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main()
// {
//     setlocale(0, "");
//     double a1, b1, a2, b2, a3, b3;
//     cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

//     double s1 = a1 * b1;
//     double s2 = a2 * b2;
//     double s3 = a3 * b3;

//     double maxS = (s1 > s2 ? (s1 > s3 ? s1 : s3) : (s2 > s3 ? s2 : s3));
//     cout << "Максимальная площадь = " << maxS;

//     return 0;
// }




// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     setlocale(0, "");
//     double a1, b1, a2, b2, a3, b3;
//     cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

//     double s1 = a1 * b1;
//     double s2 = a2 * b2;
//     double s3 = a3 * b3;

//     cout << "Максимальная площадь = " << max(s1, max(s2, s3));

//     return 0;
// }