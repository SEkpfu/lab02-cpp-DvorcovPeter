// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     int a[5][5];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//             a[i][j] = (i == j) ? 1 : 0;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//             cout << a[i][j] << " ";
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 6;
//     int a[6][6];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (j >= i)
//                 a[i][j] = n - (j - i);
//             else
//                 a[i][j] = 0;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//             cout << a[i][j] << " ";
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     int a[5][5];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (j >= n - 1 - i)
//                 a[i][j] = j - (n - 1 - i) + 1;
//             else
//                 a[i][j] = 0;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//             cout << a[i][j] << " ";
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 8;
//     int a[8][8];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//             a[i][j] = (i + j) % 2;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//             cout << a[i][j] << " ";
//         cout << endl;
//     }
// }