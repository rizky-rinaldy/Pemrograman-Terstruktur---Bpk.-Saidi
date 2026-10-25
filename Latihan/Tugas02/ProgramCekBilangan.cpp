#include <iostream>
using namespace std;

int main() {
    int bilangan;
    cout << "+========================================+" << endl;
    cout << "|      PROGRAM IDENTIFIKASI BILANGAN     |" << endl;
    cout << "+========================================+" << endl;
    cout << "\n ==> Masukkan sebuah bilangan bulat: ";
    cin >> bilangan;

    if (bilangan > 0) {
        cout << "\n+----------------------------------------+" << endl;
        cout << "|    Bilangan tersebut adalah POSITIF    |" << endl;
        cout << "+----------------------------------------+" << endl;
    } else if (bilangan < 0) {
        cout << "\n+----------------------------------------+" << endl;
        cout << "|    Bilangan tersebut adalah NEGATIF    |" << endl;
        cout << "+----------------------------------------+" << endl;
    } else {
        cout << "\n+----------------------------------------+" << endl;
        cout << "|      Bilangan tersebut adalah NOL      |" << endl;
        cout << "+----------------------------------------+" << endl;
    }
    return 0;
}