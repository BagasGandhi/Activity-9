#include <iostream>
using namespace std;

class Mahasiswa { //membuat class Mahasiswa

public:
    static int nim; //deklarasi variable static yaitu variable nim
    //deklarasi variable member
    int id;
    string nama;

    //deklarasi prosedur setID() dan printAll()
    void setID();
    void printAll();

    //pembuatan constructor Mahasiswa dengan parameter pnama
    //Member initialize list
    Mahasiswa(string pnama) :nama(pnama) {
        setID();
    }
};