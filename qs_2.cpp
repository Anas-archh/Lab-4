#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

double* add(double* a, double* b) {
    double* result = new double[2];
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    return result;
}

double* add(double* complex, int realnum) {
    double* result = new double[2];
    result[0] = complex[0] + realnum;
    result[1] = complex[1];
    return result;
}

double* subtract(double* complex, int realnum) {
    double* result = new double[2];
    result[0] = complex[0] - realnum;
    result[1] = complex[1];
    return result;
}

double* subtract(double* complex, double* complex2) {
    double* result = new double[2];
    result[0] = complex[0] - complex2[0];
    result[1] = complex[1] - complex2[1];
    return result;
}

double* multiply(double* complex, double* complex2) {
    double* result = new double[2];
    result[0] = complex[0] * complex2[0] - complex[1] * complex2[1];
    result[1] = complex[0] * complex2[1] + complex[1] * complex2[0];
    return result;
}

double* multiply(double* complex, int realnum) {
    double* result = new double[2];
    result[0] = complex[0] * realnum;
    result[1] = complex[1] * realnum; 
    return result;
}

void show(double* values) {
    cout << values[0] << " + " << values[1] << "i" << endl;
}

int main() {
    
    double c1[2], c2[2];
    int realnum;

    cout << "Enter first complex number (real imag): ";
    cin >> c1[0] >> c1[1];

    cout << "Enter second complex number (real imag): ";
    cin >> c2[0] >> c2[1];

    cout << "Enter a real number: ";
    cin >> realnum;

    cout << "c1+c2 = "; show(add(c1, c2));
    cout << "c1- c2 = "; show(subtract(c1, c2));
    cout << "c1*c2 = "; show(multiply(c1, c2));

    cout << "c1 + " << realnum << " = "; show(add(c1, realnum));
    cout << "c1 - " << realnum << " = "; show(subtract(c1, realnum));
    cout << "c1 * " << realnum << " = "; show(multiply(c1, realnum));

    return 0;

}
