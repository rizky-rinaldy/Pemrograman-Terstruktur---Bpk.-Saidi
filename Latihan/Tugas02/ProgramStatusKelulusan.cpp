#include <iostream>
using namespace std;

int main() {
    int kehadiran;
    float nilai_akhir;
    cout << "+========================================+" << endl;
    cout << "|      PROGRAM PENGECEKAN KELULUSAN      |" << endl;
    cout << "+========================================+" << endl;
    cout << "\n ==> Masukkan persentase kehadiran (%): ";
    cin >> kehadiran;
    if (kehadiran >= 75) {
        cout << " ==> Masukkan nilai akhir: ";
        cin >> nilai_akhir;
        if (nilai_akhir >= 60) {
            cout << "\n+----------------------------------------+" << endl;
            cout << "|        Status Kelulusan : LULUS        |" << endl;
            cout << "+----------------------------------------+" << endl;
        } else {
            cout << "\n+----------------------------------------+" << endl;
            cout << "|     Status Kelulusan : TIDAK LULUS     |" << endl;
            cout << "+----------------------------------------+" << endl;
        }
    } else {
        cout << "\n+----------------------------------------+" << endl;
        cout << "|   Status: Tidak boleh mengikuti UAS    |" << endl;
        cout << "+----------------------------------------+" << endl;
    }
    return 0;
}