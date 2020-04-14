#include <iostream>
using namespace std;

tambah (int x, int y) {
    int hasil;

    hasil = x + y;
    cout<<"Hasil : "<<hasil<<endl;
    return hasil;
}
int main ()
{
    int a,b;

    cout<<"Masukkan value X : ";
    cin>>a;
    cout<<"Masukkan value Y : ";
    cin>>b;

    hasil = tambah (a,b);
    cout<<"Hasil : "<<hasil<<endl;

    return 0;
}
