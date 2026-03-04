#include <iostream>
#include <string>

// Mendefinisikan Class
class Mobil {  
public: // Sementara menggunakan public agar mudah diakses
    std::string merk;  
    std::string warna;  
    int tahun;

    // Perilaku (Method)  
    void nyalakanMesin() {  
        std::cout << "Mesin mobil " << merk << " (" << warna << ") menyala!" << std::endl;  
    }  
};

int main() {  
    // Membuat Object 1 dari cetak biru Mobil  
    Mobil mobil1;  
    mobil1.merk = "Toyota";  
    mobil1.warna = "Merah";  
    mobil1.tahun = 2022;

    // Membuat Object 2 dari cetak biru yang sama  
    Mobil mobil2;  
    mobil2.merk = "Honda";  
    mobil2.warna = "Hitam";  
    mobil2.tahun = 2020;

    // Memanggil perilaku dari masing-masing object
    mobil1.nyalakanMesin();  
    mobil2.nyalakanMesin();


    // Buatlah satu objek baru bernama mobil3 di dalam main(). Isi atribut merk, warna, dan tahun-nya dengan mobil impian Anda. 
    // Kemudian panggil method nyalakanMesin() untuk objek baru tersebut dan jalankan programnya.

    Mobil mobil3;
    mobil3.merk = "Van MBG";
    mobil3.warna = "Putih";
    mobil3.tahun = 2026;
    mobil3.nyalakanMesin();

    return 0;  
}