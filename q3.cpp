#include <iostream>
#include <cstring>
using namespace std;



int holeDigit(int d) {
    if (d == 0 || d == 4 || d == 6 || d == 9) return 1;
    if (d == 8) return 2;
    return 0;
}

int holeChar(char c) {
    if (strchr("ADOPQR", c)) return 1;
    if (c == 'B') return 2;
    return 0;
}

int countHoles(int n) {
    if (n == 0) return 0;
    return holeDigit(n % 10) + countHoles(n / 10);
}

int countHoles(const char* str) {
    if (*str == '\0') return 0;
    return holeChar(*str) + countHoles(str + 1);
}

int main() {
    char choice;
    cout << "Enter d for number or s for string: ";
    cin >> choice;
    if (choice == 'd') {
        int num;
        cin >> num;
        cout << countHoles(num) << " holes" << endl;
    } else {
        char str[100];
        cin >> str;
        cout << countHoles(str) << " holes" << endl;
    }
}

