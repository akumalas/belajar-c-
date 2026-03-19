#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 85) {
        cout << "Grade: A" << endl;
    } else if (nilai >= 75) {
        cout << "Grade: B" << endl;
    } else if (nilai >= 65) {
        cout << "Grade: C" << endl;
    } else if (nilai >= 50) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: E" << endl;
    }

    return 0;
}