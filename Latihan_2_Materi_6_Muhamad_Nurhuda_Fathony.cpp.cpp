#include <iostream>
using namespace std;
struct mahasiswa
    {
    string name;
    int age;
    float height;
    string hobby[2];
    };
    
int main()

{
    mahasiswa mhs;
    mhs.name= "Angga Widyawan";
    mhs.age = 21;
    mhs.height = 8.6;
    mhs.hobby[0] = "Berenang";
    mhs.hobby[1] = "Jalan-jalan";
    
    cout << "Collage Student" << endl;
    cout << endl;
    cout << "Name : " << mhs.name << endl;
    cout << endl;
    cout << "Age : " << mhs.age << endl;
    cout << endl;
    cout << "Height : " << mhs.height << endl;
    cout << endl;
    cout << "Hobby [1] : " << mhs.hobby[0] << endl;
    cout << endl;
    cout << "Hobby [2] : " << mhs.hobby [1] << endl;
    cout << endl;
    
    return 0;
}