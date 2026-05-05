#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
    mahasiswa(int nim, string nama); // Constructor dengan parameter
};

// Definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama) {
    cout << "Counstructor dengan parameter terpanggil" << endl;
    cout << "NIM: " << nim << endl;
    cout << "Nama: " << nama << endl;
}