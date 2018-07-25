#include <iostream>
#include <stdlib.h>

	using namespace std;
	int main(){
			int edad,tipo,n1;
			cout<<"'Ingrese el tipo de especie: 1 para elefante 2 para jirafa 3 para chimpance ";
			cin>>tipo;
			cout<<"'ingrese la edad ";
			cin>>edad;
			cout<<"ingrese la cantidad";
			cin>>n1;
			if(tipo==1||edad==1){
				cout<<"el porcentaje de elefantes es"<<n1*0.04<<endl;
			}
			
		
		system("PAUSE");
		return 0;
		
		
	}
