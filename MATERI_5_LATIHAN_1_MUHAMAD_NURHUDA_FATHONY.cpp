#include <iostream>
#include <math.h>

void tambah (int x, int y) {
    int hasil;

    hasil = x + y;
    cout<<"Hasil : "<<hasil<<endl;
}
int main ()
{
    int a,b;

    cout<<"Masukkan value X : ";
    cin>>a;
    cout<<"Masukkan value Y : ";
    cin>>b;

    tambah (a,b);

    return 0;
}
