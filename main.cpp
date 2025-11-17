#include <iostream>
using namespace std;
//problem1
// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int * p = arr;
//     for (int i = 0; i < 5; i++)
//     cout << *(p + i) << " " << endl;
//     return 0;
// }
//problem2
// int main() {
//     int arr[6] = {2,4,6,8,10,12};
//     int * p = arr;
//     for (int i = 0; i < 6; i++) {
//         *(p + i) *= 3;
//         cout << *(p + i) << " " << endl;
//     }
//     return 0;
// }
//problem3
// int main() {
//     int arr[4] = {5,10,15,20};
//     int * p = arr + 4;
//    cout << "arr[2]: " << p[2] << endl;
//     cout << "(arr + 2) = " << *(arr + 2);
//     return 0;
// }
//proiblem4
// int main() {
//     int arr[5] = {1,2,3,4,5};
//     int * p = arr + 4;
//     for (int i = 0; i < 5; i++)
//         cout << *(p - i) << endl;
//         return 0;
// }
//problem5
// int main() {
//     int arr[3] = {1,2,3};
//     int * ptr = arr;
//     ptr = ptr+ 1;
//     cout << *ptr << endl;
// }
//problem6
// int main() {
//     int arr[4] = {10,20,30,40};
//     int * p = arr;
//     for (int i = 0; i < 4; i++) {
//         cout << "Value: " << *(p+i) << endl;
//         cout << "Adress: " << (p+i) << endl;
//     }
//     return 0;
// }
//problem7
// int main() {
//     int arr[7] = {11, 4, 7, 18, 5, 2, 9};
//     int * p = arr;
//     for (int i = 0; i < 7; i++)
//     if (*(p+i) % 2 == 0)
//         cout << *(p+i) << endl;
//     return 0;
// }
//problem8
// int main() {
//     int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     int * p = &matrix[0][0];
//     for (int i = 0; i < 6; i++)
//         cout << matrix[i][0] << " " << matrix[i][1] << " " << matrix[i][2] << endl;
//     return 0;
// }