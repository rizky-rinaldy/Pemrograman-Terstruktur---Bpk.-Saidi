#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char jenis, konfirmasi;
    int lama, tarif = 0, i = 1;

    cout << "+========================================+" << endl;
    cout << "|      PROGRAM TARIF PARKIR PER JAM      |" << endl;
    cout << "+========================================+" << endl;

    do {
        cout << "\n ==> Masukkan jenis kendaraan Roda (2,4): ";
        cin >> jenis;

        if (jenis != '2' && jenis != '4') {
            cout << "\n+----------------------------------------+" << endl;
            cout << "|     Jenis Kendaraan Tidak Dikenali     |" << endl;
            cout << "+----------------------------------------+" << endl;
        } else {
            cout << " ==> Masukkan lama parkir (jam): ";
            cin >> lama;

            if (lama <= 0) {
                cout << "\n+----------------------------------------+" << endl;
                cout << "|        Lama parkir tidak valid!        |" << endl;
                cout << "+----------------------------------------+" << endl;
                return 0;
            }

            string namaKendaraan;
            if (jenis == '2') {
                namaKendaraan = "Motor (Roda 2)";
                if (lama <= 2) {
                    tarif = 2000;
                } else {
                    tarif = 2000 + (lama - 2) * 1000;
                }
            } 
            else if (jenis == '4') {
                namaKendaraan = "Mobil (Roda 4)";
                if (lama <= 2) {
                    tarif = 5000;
                } else {
                    tarif = 5000 + (lama - 2) * 3000;
                }
            }

            cout << "\n==========================================" << endl;
            cout << "              STRUK PARKIR                " << endl;
            cout << "==========================================" << endl;
            cout << " No. Struk       : " << setfill('0') << setw(4) << i << endl;
            cout << " Jenis Kendaraan : " << namaKendaraan << endl;
            cout << " Lama Parkir     : " << lama << " Jam" << endl;
            cout << "------------------------------------------" << endl;
            cout << " Total Tarif     : Rp " << tarif << endl;
            cout << "==========================================" << endl;
        }

        cout << "\nHitung Tarif Kendaraan Selanjutnya? (y/t): ";
        cin >> konfirmasi;
        i++;

    } while (konfirmasi == 'y' || konfirmasi == 'Y');

    return 0;
}