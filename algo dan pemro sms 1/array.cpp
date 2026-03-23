#include <iostream>
#include <string>
using namespace std;

int main() {
    string gudang[3] = {"Laptop", "Mouse", "Keyboard"};
    int stok[3] = {10, 25, 50};

    string cari;
    int tambah;
    bool ditemukan = false;
    int indeksKetemu = -1;

    cout << "Masukkan nama barang yang datang: ";
    cin >> cari;

    // Tahap 1: Cari barangnya dulu
    for (int i = 0; i < 3; i++) {
        if (gudang[i] == cari) {
            ditemukan = true;
            indeksKetemu = i;
            break;
        }
    }

    // Tahap 2: Jika ketemu, update stoknya
    if (ditemukan) {
        cout << "Barang ditemukan! Stok saat ini: " << stok[indeksKetemu] << endl;
        cout << "Masukkan jumlah stok tambahan: ";
        cin >> tambah;

        // INI ADALAH PROSES PENAMBAHANNYA:
        stok[indeksKetemu] = stok[indeksKetemu] + tambah;

        cout << "--- UPDATE BERHASIL ---" << endl;
        cout << "Stok baru " << cari << " sekarang: " << stok[indeksKetemu] << " unit." << endl;
    } else {
        cout << "Maaf, barang tidak terdaftar di sistem." << endl;
    }

    return 0;
}