#include <iostream>
using namespace std;

int main() {
    int angka = 100;
    
    // Membuat pointer yang menunjuk ke alamat 'angka'
    // Tanda * di sini artinya "Ini adalah variabel pointer"
    int* ptr = &angka; 

    cout << "Nilai angka: " << angka << endl;
    cout << "Alamat memori angka (&angka): " << &angka << endl;
    cout << "Isi dari pointer ptr (Alamat): " << ptr << endl;
    
    // Mengambil nilai dari alamat yang ditunjuk (*)
    cout << "Nilai yang ditunjuk ptr (*ptr): " << *ptr << endl;

    // Kekuatan Pointer: Mengubah nilai asli lewat alamatnya!
    *ptr = 200;
    cout << "Nilai angka setelah diubah lewat pointer: " << angka << endl;

    return 0;
}