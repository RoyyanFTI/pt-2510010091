# Catatan Kesalahan Praktikum C++

## Tabel Evaluasi Kesalahan

| Berkas | Jenis Kesalahan | Baris / Bagian | Deskripsi Kesalahan | Cara Mengatasi |
| :--- | :--- | :--- | :--- | :--- |
| `k1_sintaks.cpp` | Syntax Error | Baris 6 | Kurang tanda titik koma (`;`) di akhir deklarasi variabel `int nilai = 80`. | Menambahkan tanda titik koma (`;`) di akhir baris tersebut. |
| `k2_nama.cpp` | Undeclared Identifier / Case-Sensitivity | Baris 8 & 9 | Variabel `Nilai` salah kapitalisasi (seharusnya `nilai`), dan variabel `bonus` digunakan sebelum dideklarasikan. | Mengubah `Nilai` menjadi `nilai` serta mendeklarasikan `int bonus = 10;`. |
| `k3_runtime.cpp` | Runtime Error (Division by Zero) | Baris 10 | Terjadi pembagian dengan nol saat nilai `jumlah_mahasiswa` diinputkan `0`, menyebabkan program crash. | Menambahkan validasi kondisi `if (jumlah_mahasiswa > 0)` sebelum melakukan proses pembagian. |
| `k4_logika.cpp` | Logical Error (Integer Division) | Baris 9 | Pembagian antar bilangan bulat (`/ 3`) membuang nilai desimal/koma sehingga hasilnya tidak akurat. | Mengubah pembagi menjadi bentuk desimal (`/ 3.0`) agar operasi menghasilkan tipe data `double`. |

Kesalahan Paling Berbahaya
Menurut saya, kesalahan yang paling berbahaya adalah runtime error (pada berkas k3_runtime.cpp) karena program dapat lolos tanpa peringatan (warning)