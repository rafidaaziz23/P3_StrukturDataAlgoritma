#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    int umur;
    string tempatTinggal;
    double tabungan;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    cout << "Masukkan umur: ";
    cin >> umur;

    cout << "Masukkan tempat tinggal: ";
    cin.ignore();
    getline(cin, tempatTinggal);

    cout << "Masukkan jumlah tabungan dalam dollar: ";
    cin >> tabungan;

    if (umur > 40 && (tempatTinggal == "Nevada" || tempatTinggal == "New York" || tempatTinggal == "Havana") && tabungan > 10000000) {
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat Don." << endl;
    } else if (umur >= 25 && umur <= 40 && (tempatTinggal == "New Jersey" || tempatTinggal == "Manhattan" || tempatTinggal == "Nevada") && tabungan >= 1000000 && tabungan <= 2000000) {
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat Underboss." << endl;
    } else if (umur >= 18 && umur <= 24 && (tempatTinggal == "California" || tempatTinggal == "Detroit" || tempatTinggal == "Boston") && tabungan < 1000000) {
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat Capo." << endl;
    } else {
        cout << nama << " tidak mencurigakan." << endl;
    }

    return 0;
}
