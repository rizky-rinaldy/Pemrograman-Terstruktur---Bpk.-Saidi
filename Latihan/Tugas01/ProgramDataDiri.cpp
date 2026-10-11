#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string nama;
    string nim;
    int umur;

    cout << "+==============================+\n";
    cout << "| >> Form Biodata Mahasiswa << |\n";
    cout << "+==============================+\n";
    cout << "    Masukkan Data Diri Anda:    \n";
    cout << " ==> Nama: ";
    getline(cin, nama);
    cout << " ==> NIM : ";
    cin >> nim;
    cout << " ==> Umur: ";
    cin >> umur;

    cout << "\n+==============================+\n";
    cout << "|  >Biodata Berhasil Disimpan< |\n";
    cout << "+==============================+\n";
    cout << "| Nama : " << right << setw(20) << nama << "  |\n";
    cout << "| NIM  : " << right << setw(20) << nim << "  |\n";
    cout << "| Umur : " << right << setw(14) << umur << " tahun  | \n";
    cout << "+==============================+\n\n";

    return 0;
}