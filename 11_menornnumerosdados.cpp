#include <iostream>
#include <stdlib.h>

	using namespace std;
	int main(){
			int repeticion,a,b;
			cout<<"digite n numeros";
			cin>>repeticion;
			cout<<"ingrese un numero";
			cin>>a;
			for  (int i=0;i<repeticion;i++){
				cout<<"ingrese un numero";
				cin>>b;
				if(b<a){
					a=b;
				}
			}
		cout<<"el numero meenor es:"<<a<<endl;
		system("PAUSE");
		return 0;
		
		
	}
