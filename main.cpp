#include <iostream>
using namespace std;

int main() {
    int angka;
    cout << "--- GENERATOR TABEL PERKALIAN ---" << endl;
    cout << "Masukkan angka yang ingin dikalikan: ";
    cin >> angka;
    int b;
    cout << "Masukkan sampai mana yang ingin dikalikan: ";
    cin >> b;

    cout << "Tabel Perkalian " << angka << ":" << endl;
    for (int i = 1; i <= b; i++) {
        cout << angka << " x " << i << " = " << (angka * i) << endl;
    }

    cout << "---------------------------------" << endl;
    return 0;
}