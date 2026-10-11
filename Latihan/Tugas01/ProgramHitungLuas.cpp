#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

void cetakRataTengah(string teks, int lebarKotakDalam = 48) {
    int panjangTeks = teks.length();
    int totalSpasi = lebarKotakDalam - panjangTeks;
    
    int spasiKiri = totalSpasi / 2;
    int spasiKanan = totalSpasi - spasiKiri;
    
    if (totalSpasi < 0) {
        cout << "|" << teks << "|\n";
    } else {
        cout << "|" 
             << string(spasiKiri, ' ') 
             << teks 
             << string(spasiKanan, ' ') 
             << "|\n";
    }
}

int main() {
    double panjang, lebar, luas;

    cout << "+================================================+\n";
    cout << "|    >> Program Hitung Luas Persegi Panjang <<   |\n";
    cout << "+================================================+\n";
    cout << "        Silahkan Masukkan Ukuran dalam CM        \n";
    cout << " ==> Panjang(cm): ";
    cin >> panjang;
    cout << " ==> Lebar(cm): ";
    cin >> lebar;

    luas = panjang * lebar;

    ostringstream streamHasil;
    streamHasil << fixed << setprecision(2) << luas << " cm2";
    string teksHasil = streamHasil.str();

    cout << "\n+================================================+\n";
    cout << "|    >> Luas persegi panjang tersebut adalah <<  |\n";
    cout << "+------------------------------------------------+\n";
    cetakRataTengah(teksHasil);
    cout << "+================================================+\n";

    return 0;
}