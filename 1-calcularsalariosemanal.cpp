#include <iostream>
#include <stdlib.h>

using namespace std;
int main (){
	int cant_c;
	int valor_c;
	int total;
	cout<<"ingrese el valor de las camsias";
	cin>>valor_c;
	cout<<"ingrese la cantidad de camisas";
	cin>>cant_c;
	if (cant_c<=5){
		cout<<"no hay descuento "<<endl;
	}else{
		if(cant_c>=10){
			total=(valor_c*cant_c)*0.20;
			cout<<" el descuento del 20% si compro 10 o mas camisas es:"<<total<<endl;
		}else{
			if(cant_c<=10 && cant_c>=5){
			total=(valor_c*cant_c)*0.10;
			cout<<" el descuento del 10% si son menos de 10 y al menos5 camisas es "<<total<<endl;			
			}
		}
		
	}
	system("pause");
	return 0;
}
