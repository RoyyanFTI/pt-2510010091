#include <iostream>
#include <string>

using namespace std;

int main() {
    // Konstanta bobot nilai
    const double BOBOT_KEHADIRAN = 0.10;
    const double BOBOT_MINGGUAN = 0.45;
    const double BOBOT_UTS = 0.25;
    const double BOBOT_UAS = 0.20;

    string nama;
    string npm;
    double kehadiran = 0;
    double mingguan = 0;
    double uts = 0;
    double uas = 0;

    cout << "=== SiNilai v0.2 ===\n";
    cout << "Nama      : ";
    getline(cin, nama);

    cout << "NPM       : ";
    cin >> npm;

    cout << "Kehadiran : ";
    cin >> kehadiran;

    cout << "Mingguan  : ";
    cin >> mingguan;

    cout << "UTS       : ";
    cin >> uts;

    cout << "UAS       : ";
    cin >> uas;

    // Menghitung nilai akhir berdasarkan bobot
    double nilai_akhir =
        (kehadiran * BOBOT_KEHADIRAN) +
        (mingguan * BOBOT_MINGGUAN) +
        (uts * BOBOT_UTS) +
        (uas * BOBOT_UAS);

    // Menghitung rata-rata sederhana
    double rerata_polos =
        (kehadiran + mingguan + uts + uas) / 4.0;

    // Menampilkan kartu nilai mahasiswa
    cout << "\n--- Kartu Nilai Mahasiswa ---\n";
    cout << "Nama        : " << nama << "\n";
    cout << "NPM         : " << npm << "\n";
    cout << "Nilai akhir : " << nilai_akhir << "\n";
    cout << "Rerata polos: " << rerata_polos << "\n";

    return 0;
}