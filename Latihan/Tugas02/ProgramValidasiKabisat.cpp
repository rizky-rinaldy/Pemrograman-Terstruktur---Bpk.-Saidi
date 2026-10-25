#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int tahun;
    cout << "+========================================+" << endl;
    cout << "|     PROGRAM VALIDASI TAHUN KABISAT     |" << endl;
    cout << "+========================================+" << endl;
    cout << "\n ==> Masukkan tahun: ";
    cin >> tahun;

    if ((tahun % 400 == 0) || (tahun % 4 == 0 && tahun % 100 != 0)) {
        cout << "\n+----------------------------------------+" << endl;
        cout << "|     Tahun " << left << setw(4) << tahun << " adalah Tahun Kabisat    |" << endl;
        cout << "+----------------------------------------+" << endl;
    } else {
        cout << "\n+----------------------------------------+" << endl;
        cout << "|     Tahun " << left << setw(4) << tahun << " Bukan Tahun Kabisat     |" << endl;
        cout << "+----------------------------------------+" << endl;
    }
    return 0;
}