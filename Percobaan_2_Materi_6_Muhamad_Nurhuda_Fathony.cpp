#include <iostream>
using namespace std;
struct mahasiswa
    {
    string nama;
    int usia;
    float ipk;
    string hobi[2];
    };
    
int main()

{
    mahasiswa mhs;
    mhs.nama = "Agung";
    mhs.usia = 21;
    mhs.ipk = 3.6;
    mhs.hobi[0] = "Berenang";
    mhs.hobi[1] = "Nonton";
    
    cout << mhs.nama << endl;
    cout << mhs.usia << endl;
    cout << mhs.ipk << endl;
    cout << mhs.hobi[0] << endl;
    cout << mhs.hobi[1] << endl;
    
    return 0;
}