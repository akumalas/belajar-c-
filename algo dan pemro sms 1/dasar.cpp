#include <iostream>
using namespace std;

int main() {
    string nama;
    int umur;


    cout << "Masukkan nama: ";
    cin >> nama;

    cout << "Masukkan umur: ";
    cin >> umur;

    int tahun=5;


    cout << "\n=== BIODATA ===" << endl;
    cout << "Nama   : " << nama << endl;
    cout << "Umur   : " << umur << " tahun" <<  endl;
    cout << "Umur anda 5 tahun lagi : " << umur + tahun << " tahun" <<  endl;

    if (umur >= 10) {
        cout <<"anda masih anak anak" << endl;
    } else if (umur >= 21) {
        cout <<"anda masih remaja"<< endl;

    }

    return 0;
}