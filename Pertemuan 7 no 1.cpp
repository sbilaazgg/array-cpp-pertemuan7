#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Langkah 1: Membuat sebuah vector untuk menyimpan angka
    std::vector<int> angka;
    int jumlah, nilai;

    // Langkah 2: Meminta input dari pengguna untuk mengisi vector
    std::cout << "Berapa banyak angka yang ingin Anda masukkan? ";
    std::cin >> jumlah;

    for (int i = 0; i < jumlah; ++i) {
        std::cout << "Masukkan angka ke-" << (i + 1) << ": ";
        std::cin >> nilai;
        angka.push_back(nilai);
    }

    // Langkah 3: Menemukan dan menampilkan nilai tertinggi dalam vector
    int nilai_tertinggi = *std::max_element(angka.begin(), angka.end());
    std::cout << "Nilai tertinggi dalam daftar adalah: " << nilai_tertinggi << std::endl;

    // Langkah 4: Memeriksa apakah sebuah angka ada dalam vector
    int cari_angka;
    std::cout << "Masukkan angka untuk memeriksa apakah angka tersebut ada dalam daftar: ";
    std::cin >> cari_angka;

    auto it = std::find(angka.begin(), angka.end(), cari_angka);
    if (it != angka.end()) {
        int indeks = std::distance(angka.begin(), it);
        std::cout << "Angka " << cari_angka << " ditemukan dalam daftar pada indeks: " << indeks << std::endl;
    } else {
        std::cout << "Angka " << cari_angka << " tidak ditemukan dalam daftar." << std::endl;
    }

    return 0;
}
