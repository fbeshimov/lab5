#include <iostream>
using namespace std;
//Problem11
// int main() {
//     int number;
//     int positiveCount = 0;
//     int negativeCount = 0;
//     int total = 0;
//     int cnt = 0;
//     cout << "Enter a integer, the input ends if it is 0: ";
//     cin >> number;
//     while (cin >> number) {
//         if (number == 0) {
//             break;
//         }
//         if (number < 0) {
//             negativeCount++;
//         } else
//             positiveCount++;
//         total += number;
// cnt++;    }
//     if (negativeCount == 0 && positiveCount == 0 && number > 0)
//         cout << "No numbers were entered except 0" << endl;
//     else if (negativeCount == 0 && positiveCount >= 1 && number > 0)
//         cout << "The number of positives is " << positiveCount << endl;
//     else if ( negativeCount >= 1 && positiveCount == 0 && number > 0)
//     cout << "The number of negatives is "<< negativeCount << endl;
//     else if ( negativeCount >= 1 && positiveCount >= 1 && number > 0)
//     cout << "The number of negatives and positives is " << negativeCount <<" and "<< positiveCount << endl;
//     cout <<"Total numbers are: " << total << endl;
//     return 0;
// }
//Problem12
// int main() {
//     int n;
//     cout << "Enter a the size of the square: ";
//     cin >> n;
//     int arr[n][n];
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//Problem13
// int main() {
//     int n;
//     cout << "Enter a number of rows: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << " * ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//Problem14
// int main() {
//     int n;
//     cout << "Enter the depth: ";
//     cin >> n;
//     if (n == 0) {
//         cout << "The depth is zero" << endl;
//     } else {
//     }
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << i;
//         }
//         cout << endl;
//     }
//     return 0;
// }
//Problem15
// int main() {
//     int n;
//     double sum = 0.0;
//     cout << "Input a number: ";
//     cin >> n;
//     cout <<"[";
//     for (int i = 1; i <= n; i++) {
//         cout << "1/" << i;
//         if (i < n) {
//             cout << " + ";
//         }
//     }
//     cout << "]" << endl;
//     for (int i = 1; i <= n; i++) {
//         sum += 1.0 / i;
//     }
//     cout << "The sum is " << sum << endl;
//     return 0;
// }
//`problem16
// int main() {
//     int n;
//     cin >> n;
//     double rent = 1000.0;
//     double rate = 0.03;
//     int years = 5;
//     double totalAllYears = 0.0;
//     for (int year = 1; year <= years; year++) {
//         double monthlyRent = rent;
//         double yearlyTotal = monthlyRent * 12;
//     cout << "For year number " << year
//     << "rent is " << monthlyRent << endl;
//     cout << "The total for year " << year
//     << " is " << yearlyTotal << endl;}
//     rent = rent * (1 + rate);
// }
// cout << "For all  years total rent is " << yearlyTotal << endl;
// return 0;
