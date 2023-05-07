#include <iostream>

using namespace std;

int main() {
    int lari, pushUp, plank;
    int totalKalori = 0;

    cout << "Masukkan jumlah waktu lari (dalam menit): ";
    cin >> lari;
    totalKalori += (lari / 5) * 60;

    cout << "Masukkan jumlah waktu push-up (dalam menit): ";
    cin >> pushUp;
    totalKalori += (pushUp / 30) * 200;

    cout << "Masukkan jumlah waktu plank (dalam menit): ";
    cin >> plank;
    totalKalori += plank * 5;

    cout << "Total jumlah kalori yang terbakar: " << totalKalori << " kalori" << endl;

    return 0;
}
