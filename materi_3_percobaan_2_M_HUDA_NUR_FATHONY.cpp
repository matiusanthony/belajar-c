#include <iostream>
using namespace std;

int main ()
{
	string username = "admin", password = "12345" , temp_username, temp_password;
	
	cout<<"masukan username : ";
	cin>>temp_username;
	
	cout<<"masukan password : ";
	cin>>temp_password;
	
	if (temp_username == username)
	{
		if(temp_password == password)
		  cout<<"selamat, anda berhasil login"<<endl;
	    else
	      cout<<"mohon maaf, login tidak berhasil"<<endl;
	      
		  
	}
	else
	     cout<<"mohon maaf, login tidak berhasil"<<endl;
	
	system ("pause");
	return 0;
}
