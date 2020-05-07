#include <iostream>

using namespace  std;

    int pilihan;
    
    string text;
    
int main()
{
    awal:
    cout << "Tingkat Polusi Kota Kediri:\n";
    cout << "1. Rendah \n2. Sedang \n3. Tinggi\n"<<endl;
    ulangi: cout << "Tingkat Polusi : "<<endl;
    cin >> pilihan;
    
    switch (pilihan)
    {case 1: text="Rendah";
     break;
     
     case 2: text="Sedang";
     break;
     
     case 3: text="Tinggi";
     break;
     
     default: goto ulangi;
     }
     cout << text;
     
     cout << endl;
     
     char yt;
     
     cout << endl;
     
     cout << "Apakah Ingin Mengulang (y/t) ? ";
     cin >> yt;
     
     cout << endl;
     if (yt=='Y'||yt=='y')
     {
         goto awal;
     }
     if (yt=='T'||yt=='t')
     {
         goto akhir;
     }
         akhir:
     
    return 0;
}
