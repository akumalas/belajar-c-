#include <iostream>
using namespace std;

// Fungsi untuk menghitung harga setelah diskon
double hitungDiskon(double hargaAsli, double persenDiskon) {
    double potongan = hargaAsli * (persenDiskon / 100);
    return hargaAsli - potongan;
}

int main() {
    double harga;
    double diskon = 10; // Diskon tetap 10%
    string iya;
    double member = 15;


    cout << "=== KASIR TOKO C++ ===" << endl;
    cout << "Masukkan total harga belanja: Rp";
    cin >> harga;

    cout << "apakah anda member ?";
    cin >> iya;

    if (iya == "tentu") {
        double hargamember = hitungDiskon(harga, member);
        cout << "selamat karena anda member diskon anda 15%" << endl;
        cout << "total yang harus dibayar : Rp"<< hargamember<< endl;
    } else if(harga > 100000) {
        double hargaAkhir = hitungDiskon(harga, diskon);
        cout << "Selamat! Anda dapat diskon 10%." << endl;
        cout << "Total yang harus dibayar: Rp" << hargaAkhir << endl;
    } else {
        cout << "Total yang harus dibayar: Rp" << harga << endl;
        cout << "Belanja di atas Rp100.000 untuk dapat diskon!" << endl;
    }



    return 0;
}