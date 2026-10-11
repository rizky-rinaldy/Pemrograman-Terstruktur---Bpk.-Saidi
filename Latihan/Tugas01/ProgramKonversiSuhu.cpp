#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

int main() {
    const double RASIO_S = 9.0 / 5.0;
    const double OFFSET_F = 32.0;
    double celsius, fahrenheit;

    cout << "+================================================+\n";
    cout << "|     >> Program Konversi Suhu (C ke F) <<       |\n";
    cout << "+================================================+\n";
    cout << "        Silahkan Masukkan Suhu dalam Celsius     \n";
    cout << " ==> Suhu (Celsius): ";
    cin >> celsius;

    fahrenheit = (celsius * RASIO_S) + OFFSET_F;

    ostringstream streamCelsius, streamFahrenheit;
    streamCelsius << fixed << setprecision(2) << celsius;
    streamFahrenheit << fixed << setprecision(2) << fahrenheit;

    string teksHasil = streamFahrenheit.str() + " °F";
    
    cout << "\n              >> Hasil Konversi <<              \n\n";
    cout << " ==> Suhu (Fahrenheit) " << teksHasil << "\n";
    cout << "+================================================+\n";

    return 0;
}