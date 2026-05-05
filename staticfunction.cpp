#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {

private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    void printAll();

    //pembuatan static function
    static void setNim(int pnim) {
        nim = pnim;
    };
};