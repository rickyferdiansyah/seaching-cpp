#include <iostream>

int main()
{
    //ini datanya udah diurutin loh ya
    int nilai[] = {65, 70, 75, 80, 85, 90, 95};
    int nilaiSize = sizeof(nilai) / sizeof(nilai[0]);

    int key;
    std::cout << "Masukkan nilai yang ingin Anda cari: ";
    std::cin >> key;

    // Implementasi Binary Search
    int left = 0;
    int right = nilaiSize - 1;
    int foundIndex = -1; // Inisialisasi variabel foundIndex sebagai -1, menandakan elemen tidak ditemukan

    while (left <= right)
    {
        int middle = left + (right - left) / 2;

        if (nilai[middle] == key)
        {
            foundIndex = middle; // Menemukan elemen, update nilai foundIndex dengan indeks elemen yang ditemukan
            break;
        }
        else if (nilai[middle] < key)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
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
