#include <iostream>
using namespace std;

int main() 
{
    int kurs [6][6] = {{14500, 15500, 13200, 16000, 18000, 21000}, {21000, 18000, 16000, 15000, 14500, 15500}};
    
    cout << "Menampilkan secara manual"<<endl;
    cout << "Kurs : "<<kurs[0][0]<<endl;
    cout << "Kurs : "<<kurs[1][1]<<endl;
    cout << "Kurs : "<<kurs[3][3]<<endl;
    cout << "Kurs : "<<kurs[4][4]<<endl;
    cout << "Kurs : "<<kurs[4][4]<<endl;
    cout << "Kurs : "<<kurs[5][5]<<endl;
    
    cout << endl;
    
    
    cout<<"Menampilkan menggunakan for "<<endl;
    int b,k;
    
    for (int b=0; b<6; b++)
    {
        for (int k=0; k<6; k++)
    {
        cout << "Kurs : "<<kurs[b][k]<<endl;
    }
    cout << endl;
    }
    
    return 0;
}
