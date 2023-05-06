#include <iostream>
using namespace std;

int main() {
    int nomorPunggung;

    cout << "Masukkan nomor punggung pemain: ";
    cin >> nomorPunggung;

    if (nomorPunggung % 2 == 0) {
        if (nomorPunggung >= 50 && nomorPunggung <= 100) {
            cout << "Posisi: Capten Team" << endl;
        } else {
            cout << "Posisi: Target Attacker" << endl;
        }
    } else {
        if (nomorPunggung % 3 == 0 && nomorPunggung % 5 == 0) {
            cout << "Posisi: Keeper" << endl;
        } else if (nomorPunggung > 90) {
            cout << "Posisi: Playmaker" << endl;
        } else {
            cout << "Posisi: Defender" << endl;
        }
    }

    return 0;
}
