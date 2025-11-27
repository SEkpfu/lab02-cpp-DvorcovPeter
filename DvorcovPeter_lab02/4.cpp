// #include <iostream>
// using namespace std;

// int main()
// {
//     setlocale(0, "");
//     int dM, dW;
//     cout << "Введите день месяца: ";
//     cin >> dM;
//     cout << "Введите номер дня недели: ";
//     cin >> dW;

//     if (dM == 13)
//     {
//         if (dW == 5)
//             cout << "Неудачный день\n";
//         else if (dW == 2)
//             cout << "Неудачный день\n";
//     }
//     if (dM == 17)
//     {
//         if (dW == 5)
//             cout << "Неудачный день в Италии\n";
//     }

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main()
// {
//     setlocale(0, "");
//     int dM, dW;
//     cin >> dM >> dW;

//     if ((dM == 13 && (dW == 5 || dW == 2)) || (dM == 17 && dW == 5))
//         cout << "Неудачный день\n";

//     return 0;
// }