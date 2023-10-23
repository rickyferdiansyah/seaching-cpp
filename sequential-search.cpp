#include <iostream>

int main()
{
    int nilai[] = {70, 80, 90, 65, 75, 95, 85};
    int nilaiSize = sizeof(nilai) / sizeof(nilai[0]);

    int key;
    std::cout << "Masukkan nilai yang ingin Anda cari: ";
    std::cin >> key;

    // Implementasi Sequential Search
    int foundIndex = -1; // Inisialisasi variabel foundIndex sebagai -1, menandakan elemen tidak ditemukan
    for (int i = 0; i < nilaiSize; i++)
    {
        if (nilai[i] == key)
        {
            foundIndex = i; // Menemukan elemen, update nilai foundIndex dengan indeks elemen yang ditemukan
            break;          // Keluar dari loop setelah menemukan elemen yang cocok
        }
    }

    // Menampilkan hasil pencarian
    if (foundIndex != -1)
    {
        std::cout << "Nilai " << key << " ditemukan pada indeks " << foundIndex << std::endl;
    }
    else
    {
        std::cout << "Nilai " << key << " tidak ditemukan dalam array." << std::endl;
    }

    return 0;
}
