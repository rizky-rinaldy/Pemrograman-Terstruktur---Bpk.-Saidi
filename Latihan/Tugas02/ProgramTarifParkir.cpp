#include <iostream>
using namespace std;

int main() {
    char jenis;
    int lama, tarif = 0;
    cout << "+========================================+" << endl;
    cout << "|      PROGRAM TARIF PARKIR PER JAM      |" << endl;
    cout << "+========================================+" << endl;
    cout << "\n ==> Masukkan jenis kendaraan Roda (2,4): ";
    cin >> jenis;
    cout << " ==> Masukkan lama parkir (jam): ";
    cin >> lama;
    if (lama <= 0) {
        cout << "\n+----------------------------------------+" << endl;
        cout << "|        Lama parkir tidak valid!        |" << endl;
        cout << "+----------------------------------------+" << endl;
        return 0;
    }
    if (jenis == '2') {
        if (lama <= 2) {
            tarif = 2000;
        } else {
            tarif = 2000 + (lama - 2) * 1000;
        }
        cout << "\n+----------------------------------------+" << endl;
        cout << "|    Total tarif parkir Motor: Rp " << tarif << "   |" << endl;
        cout << "+----------------------------------------+" << endl;
    } 
    else if (jenis == '4') {
        if (lama <= 2) {
            tarif = 5000;
        } else {
            tarif = 5000 + (lama - 2) * 3000;
        }
        cout << "\n+----------------------------------------+" << endl;
        cout << "|    Total tarif parkir Mobil: Rp " << tarif << "   |" << endl;
        cout << "+----------------------------------------+" << endl;
    } 
    else {
        cout << "\n+----------------------------------------+" << endl;
        cout << "|     Jenis Kendaraan Tidak Dikenali     |" << endl;
        cout << "+----------------------------------------+" << endl;
    }
    return 0;
}