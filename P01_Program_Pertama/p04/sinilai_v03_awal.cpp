#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama, npm;
    double kehadiran = 0, mingguan = 0, uts = 0, uas = 0;

    // Bobot penilaian (misalnya disesuaikan dengan ketentuan mata kuliah)
    const double BOBOT_KEHADIRAN = 0.10;
    const double BOBOT_MINGGUAN  = 0.20;
    const double BOBOT_UTS       = 0.30;
    const double BOBOT_UAS       = 0.40;

    // Input data mahasiswa dan nilai komponen
    cout << "Masukkan Nama : ";
    getline(cin, nama);
    cout << "Masukkan NPM  : ";
    cin >> npm;
    cout << "Kehadiran (0-100) : ";
    cin >> kehadiran;
    cout << "Mingguan (0-100)  : ";
    cin >> mingguan;
    cout << "UTS (0-100)       : ";
    cin >> uts;
    cout << "UAS (0-100)       : ";
    cin >> uas;

    // Perhitungan nilai akhir
    double nilai_akhir = kehadiran * BOBOT_KEHADIRAN + mingguan * BOBOT_MINGGUAN 
                       + uts * BOBOT_UTS + uas * BOBOT_UAS;

    // TODO 1: Deklarasikan string huruf_mutu, lalu isi dengan if-else bertingkat dari batas tertinggi
    string huruf_mutu;
    if (nilai_akhir >= 80) {
        huruf_mutu = "A";
    } else if (nilai_akhir >= 75) {
        huruf_mutu = "B+";
    } else if (nilai_akhir >= 70) {
        huruf_mutu = "B";
    } else if (nilai_akhir >= 65) {
        huruf_mutu = "C+";
    } else if (nilai_akhir >= 60) {
        huruf_mutu = "C";
    } else if (nilai_akhir >= 40) {
        huruf_mutu = "D";
    } else {
        huruf_mutu = "E";
    }

    // TODO 2: Deklarasikan bool lulus (minimal nilai_akhir >= 60 atau huruf mutu minimal C)[cite: 11]
    bool lulus = nilai_akhir >= 60;

    // TODO 3: Deklarasikan string keterangan menggunakan switch pada karakter pertama huruf_mutu[cite: 11]
    string keterangan;
    switch (huruf_mutu[0]) {
        case 'A':
            keterangan = "Sangat baik";
            break;
        case 'B':
            keterangan = "Baik";
            break;
        case 'C':
            keterangan = "Cukup";
            break;
        case 'D':
            keterangan = "Kurang";
            break;
        case 'E':
            keterangan = "Sangat kurang";
            break;
        default:
            keterangan = "Tidak dikenal";
            break;
    }

    // Menampilkan hasil
    cout << "\n--- Kartu Nilai Mahasiswa ---\n";
    cout << "Nama          : " << nama << "\n";
    cout << "NPM           : " << npm << "\n";
    cout << "Nilai akhir   : " << nilai_akhir << "\n";
    
    // TODO 4: Tampilkan Huruf mutu, Keterangan, dan Status (Lulus / Belum lulus) sejajar[cite: 11]
    cout << "Huruf mutu    : " << huruf_mutu << "\n";
    cout << "Keterangan    : " << keterangan << "\n";
    cout << "Status        : " << (lulus ? "Lulus" : "Belum lulus") << "\n";

    return 0;
}