#include <iostream>
using namespace std;

int main ()
{
	int sila;
	
	cout<<"masukan sila ke :-";
	cin>>sila;
	
	switch(sila){
		case 1:
			cout<<"ketuhanan yang maha esa"<<endl;
			break;
		case 2 : 
		    cout<<"kemanusian yang adil dan beradab"<<endl;
		    break;
	    case 3 :
	        cout<<"persatuan indonesia indonesia"<<endl;
	        break;
	    case 4 :
	        cout<<"kerakyatan yang dipimpin oleh hikmat kebijaksanaan"<<endl
	            <<"dalam permusywaratan/perwakilan"<<endl;
	        break;
	    case 5 :
	    	cout<<"keadilan sosial bagi seluruh rakyat indonesia"<<endl;
	    	break;
	    default :
	    	cout<<"tidak ada";
	    	break;
	                
	        
	}
	system ("pause");
	return 0;
}
