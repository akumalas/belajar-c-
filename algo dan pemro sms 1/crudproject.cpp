#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Barang {
    int id;
    string nama;
    int stok;
};

// Database sederhana menggunakan Vector (Array Dinamis)
vector<Barang> gudang;
int idCounter = 1;

void tambahBarang() {
    Barang baru;
    baru.id = idCounter++;
    cout << "Nama Barang: ";
    cin.ignore(); // Membersihkan buffer
    getline(cin, baru.nama);
    cout << "Jumlah Stok: ";
    cin >> baru.stok;

    gudang.push_back(baru); // Memasukkan ke "database"
    cout << "Barang berhasil ditambahkan!\n";
}

void tampilkanBarang() {
    cout << "\n--- DAFTAR BARANG GUDANG ---\n";
    if (gudang.empty()) {
        cout << "Gudang kosong.\n";
        return;
    }
    for (const auto& b : gudang) {
        cout << "ID: " << b.id << " | Nama: " << b.nama << " | Stok: " << b.stok << endl;
    }
}

void updateStok() {
    int cariId;
    cout << "Masukkan ID barang yang akan diupdate: ";
    cin >> cariId;

    for (auto& b : gudang) {
        if (b.id == cariId) {
            cout << "Stok baru untuk " << b.nama << ": ";
            cin >> b.stok;
            cout << "Stok berhasil diperbarui!\n";
            return;
        }
    }
    cout << "Barang dengan ID tersebut tidak ditemukan.\n";
}

void hapusBarang() {
    int cariId;
    cout << "Masukkan ID barang yang akan dihapus: ";
    cin >> cariId;

    for (auto it = gudang.begin(); it != gudang.end(); ++it) {
        if (it->id == cariId) {
            gudang.erase(it); // Menghapus dari vector
            cout << "Barang berhasil dihapus!\n";
            return;
        }
    }
    cout << "ID tidak ditemukan.\n";
}

int main() {
    int pilihan;
    do {
        cout << "\n=== MENU GUDANG C++ ===\n";
        cout << "1. Tambah Barang (Create)\n";
        cout << "2. Lihat Barang (Read)\n";
        cout << "3. Update Stok (Update)\n";
        cout << "4. Hapus Barang (Delete)\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: tambahBarang(); break;
            case 2: tampilkanBarang(); break;
            case 3: updateStok(); break;
            case 4: hapusBarang(); break;
            case 5: cout << "Keluar program...\n"; break;
            default: cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 5);

    return 0;
}