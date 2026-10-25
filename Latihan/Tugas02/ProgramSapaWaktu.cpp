#include <iostream>
using namespace std;

int main() {
    int jam;
    cout << "+========================================+" << endl;
    cout << "|       PROGRAM SAPAAN SESUAI WAKTU      |" << endl;
    cout << "+========================================+" << endl;
    cout << "\n ==> Masukkan jam (0-23): ";
    cin >> jam;

    if (jam < 0 || jam > 23) {
        cout << "\n+----------------------------------------+" << endl;
        cout << "|   Error:   Jam di luar rentang 0-23!   |" << endl;
        cout << "+----------------------------------------+" << endl;
    } else if (jam >= 4 && jam <= 10) {
        cout << "\n+----------------------------------------+" << endl;
        cout << "|    Selamat pagi, Semangat Hari ini!    |" << endl;
        cout << "+----------------------------------------+" << endl;
    } else if (jam >= 11 && jam <= 14) {
        cout << "\n+----------------------------------------+" << endl;
        cout << "| Selamat siang, Jangan Lupa Makan Siang |" << endl;
        cout << "+----------------------------------------+" << endl;
    } else if (jam >= 15 && jam <= 17) {
        cout << "\n+----------------------------------------+" << endl;
        cout << "|  Selamat sore, Pulang Kerja Hati-hati  |" << endl;
        cout << "+----------------------------------------+" << endl;
    } else {
        cout << "\n+----------------------------------------+" << endl;
        cout << "|   Selamat malam, Istirahat yang Cukup  |" << endl;
        cout << "+----------------------------------------+" << endl;
    }
    return 0;
}