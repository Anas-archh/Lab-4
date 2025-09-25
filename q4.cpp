#include <iostream>
using namespace std;

// int fibonaci(n) {
//     if (n == 0) {return 1};
//     else if (n == 1) {return 1};
//     else {
//         return fibonaci(n-1) + fibonaci(n-2)
//     }
// }

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;
//     long result = fibonaci(n);
//     cout << "fib(" << n << ") = " << result << endl;
// }


long fib(int n) {
    static long count = 0;
    count++;
    if (n == 0) return 1;
    else if (n==1) return 1;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    long result = fib(n);
    cout << "fib(" << n << ") = " << result << endl;
}
