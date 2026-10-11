#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

string formatRupiah(double angka) {
    long long nilai = round(angka);
    string s = to_string(nilai);
    string hasil = "";
    int n = s.length();
    int count = 0;
    
    for (int i = n - 1; i >= 0; i--) {
        hasil = s[i] + hasil;
        count++;
        if (count % 3 == 0 && i > 0) {
            hasil = "." + hasil;
        }
    }
    return hasil;
}

int main() {
    double harga, total_belanja, diskon = 0.0, total_awal;
    int jumlah;

    cout << "+================================================+\n";
    cout << "|          >> Program Kasir Toko <<              |\n";
    cout << "+================================================+\n";
    cout << "| Masukkan Data Pembelian:                       |\n";
    cout << "+------------------------------------------------+\n";
    cout << " ==> Harga per Pcs : ";
    cin >> harga;
    cout << " ==> Jumlah barang : ";
    cin >> jumlah;
    total_awal = harga * jumlah;
    total_belanja = total_awal;
    if (total_belanja >= 100000) {
        diskon = 0.10 * total_belanja;
        total_belanja -= diskon;
    }

    cout << "\n+================================================+\n";
    cout << "|            >> Hasil Transaksi <<               |\n";
    cout << "+------------------------------------------------+\n";
    if (diskon > 0) {
        cout << "| Status : Selamat! Anda mendapat diskon 10%     |\n";
    } else {
        cout << "| Status : Belanja < 100.000 (Tidak ada diskon)  |\n";
    }
    cout << "| Total Belanja : Rp " << setw(27) << formatRupiah(total_awal) << " |\n";
    cout << "| Diskon        : Rp " << setw(27) << formatRupiah(diskon) << " |\n";
    cout << "| Total Bayar   : Rp " << setw(27) << formatRupiah(total_belanja) << " |\n";
    cout << "+================================================+\n";

    return 0;
}