#include <iostream>
using namespace std;

int main() 
{
    string nama [6] = {"Alfamart", "Indomaret", "K-Mart", "Circle K", "Alfamidi", "Indomei"};
    
    cout << "Menampilkan secara manual"<<endl;
    cout << "Nama : "<<nama[0]<<endl;
    cout << "Nama : "<<nama[1]<<endl;
    cout << "Nama : "<<nama[2]<<endl;
    cout << "Nama : "<<nama[3]<<endl;
    cout << "Nama : "<<nama[4]<<endl;
    cout << "Nama : "<<nama[5]<<endl;
    
    cout << endl;
    
    cout<<"Menampilkan menggunakan for "<<endl;
    for (int i=0; i<6; i++)
    {
        cout << "Nama : "<<nama[i]<<endl;
    }
    
    return 0;
}
