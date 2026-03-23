#include <iostream>
#include <string>
using namespace std;

int main() {
    string channelTV = "RCTI";
    string* remote = &channelTV;

    cout << "TV sedang menyala di: " << channelTV << endl;
    
    cout << "Ganti channel lewat remote... " << endl;
    *remote = "global tv"; // Mengubah isi variabel lewat pointer

    cout << "Sekarang TV menampilkan: " << channelTV << endl;

    return 0;
}