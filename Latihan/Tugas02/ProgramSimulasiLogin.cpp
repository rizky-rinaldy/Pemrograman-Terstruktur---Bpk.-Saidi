#include <iostream>
#include <string>
using namespace std;

int main() {
    string username_benar = "admin123";
    string pin_benar = "6702";
    string input_user, input_pin;

    cout << "+========================================+" << endl;
    cout << "|        SIMULASI LOGIN SEDERHANA        |" << endl;
    cout << "+========================================+" << endl;
    cout << "\n ==> Masukkan username: ";
    cin >> input_user;

    if (input_user == username_benar) {
        cout << " ==> Masukkan PIN: ";
        cin >> input_pin;
        if (input_pin == pin_benar) {
            cout << "\n+----------------------------------------+" << endl;
            cout << "|     Login Berhasil! Selamat datang     |" << endl;
            cout << "+----------------------------------------+" << endl;
        } else {
            cout << "\n+----------------------------------------+" << endl;
            cout << "|         Login Gagal! PIN Salah         |" << endl;
            cout << "+----------------------------------------+" << endl;
        }
    } else {
        cout << "\n+----------------------------------------+" << endl;
        cout << "|        Username tidak ditemukan        |" << endl;
        cout << "+----------------------------------------+" << endl;
    }
    return 0;
}