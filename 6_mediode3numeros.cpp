#include <iostream>
#include <stdlib.h>

	using namespace std;
	int main(){
			int a,b,c;
			cout<<"ingrese 3 numeros";
			cin>>a;
			cout<<"ingrese 3 numeros";
			cin>>b;
			cout<<"ingrese 3 numeros";
			cin>>c;
			if ((a>b&&a<c)||(a<b&&a>c)){
				cout<<"el del medio es"<<a<<endl;
			}else if ((b>a&&b<c)||(b<a&&b>c)){
				cout<<"el del medio es"<<b<<endl;
			}else if (c>a&&c<b||c<a&&c>b){
				cout<<"el del medio es"<<c<<endl;
			}
			
			
		
		system("PAUSE");
		return 0;
		
		
	}
