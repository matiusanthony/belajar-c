#include <iostream>
using namespace std;
struct mahasiswa
    {
    string nama;
    int usia;
    float ipk;
    };
    
int main()

{
    mahasiswa mhs;
    mhs.nama = "Agung";
    mhs.usia = 21;
    mhs.ipk = 3.6;
    
    cout << mhs.nama << endl;
    cout << mhs.usia << endl;
    cout << mhs.ipk << endl;
    
    return 0;
}