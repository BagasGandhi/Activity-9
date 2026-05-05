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

//memberi value ke variable nim dari class mahasiswa
int Mahasiswa::nim = 10;

//mengimplementasikan prosedur - prosedur di luar class
void Mahasiswa::setID() {
    id = ++nim;
};

void Mahasiswa::printAll() {
    
    cout << "ID : " << id << endl;
    cout << "Nama : " << nama << endl;
    cout << endl;
};

int main() {
    //membuat object dan memberi nilai
    Mahasiswa mhs1("Lia Kurnia");
    Mahasiswa mhs2("Fawwaz Sratus");
    Mahasiswa mhs3("Andi Kurniawan");
    Mahasiswa mhs4("Bagas Satya Widhi");

    //memanggil prosedur printAll()
    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    return 0;
    
}