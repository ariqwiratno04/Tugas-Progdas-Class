#include <iostream>
#include <string>

using namespace std;

class Pengembalian{
    public:
        string title;
        string penulis;

        string nama;
        string alamat;
        int no_hp;

    Pengembalian(string inTitle, string inPenulis, string inNama, string inAlamat, int inNo_hp){

    Pengembalian::title     = inTitle;
    Pengembalian::penulis   = inPenulis;
    Pengembalian::nama      = inNama;
    Pengembalian::alamat    = inAlamat;
    Pengembalian::no_hp     = inNo_hp;
    }

    void displayData(){
        cout << "Judul\t: " << title << endl;
        cout << "Penulis\t: " << penulis << endl;
        cout << endl;
        cout << "Nama Peminjam\t " << nama << endl;
        cout << "Alamat\t: " << alamat << endl;
        cout << "Nomor hape\t: " << no_hp << endl;
    }

};

int main(){
    string inputJudul, inputPenulis, inputNama, inputAlamat;
    int inputNo_hp;

    cout << "INPUT DATA BUKU" << endl;
    cout << "Judul\t\t: ";
    getline(cin, inputJudul);
    cout << "Penulis\t\t: ";
    getline(cin, inputPenulis);
    cout << "Nama peminjam\t: ";
    getline(cin, inputNama);
    cout << "Alamat\t\t: ";
    getline(cin, inputAlamat);
    cout << "Nomor hape\t: ";
    cin >> inputNo_hp;

    Pengembalian p1 = Pengembalian(inputJudul, inputPenulis, inputNama, inputAlamat, inputNo_hp);

    p1.displayData(p1);

    return 0;
}
