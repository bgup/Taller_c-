#include <iostream>
#include <stdlib.h>

	using namespace std;
	int main(){
			int num,prom,unidades,descuento,materias;
			cout<<"Ingrese 1 si es de preparatoria o 2 si es profesional";
			cin>>num;
			cout<<"Ingrese su promedio";
			cin>>prom;
			if (prom>=9.5){
				if(num==1){
					unidades=(55/5)*180;
					descuento=unidades-(unidades*0.25);
					cout<<"el total a pagar es"<<descuento<<endl;
				}else{
					unidades=(55/5)*300;
					descuento=unidades-(unidades*0.20);
					cout<<"el total a pagar es"<<descuento<<endl;
				}
			}else if(prom>=9&&prom<9.5){
				if(num==1){
					unidades=(55/5)*180;
					descuento=unidades-(unidades*0.10);
					cout<<"el total a pagar es"<<descuento<<endl;
				}else{
					unidades=(55/5)*300;
					cout<<"el total a pagar es"<<unidades<<endl;
				}
			}else if(prom>=7&&prom<9){
				if (num==1){
					unidades=(55/5)*180;
					cout<<"el total a pagar es"<<unidades<<endl;
				}
			}else if (prom<=7){
				cout<<"ingrese el numero de materias reprobadas ";
				cin>>materias;
				if(materias<=3){
					unidades=(45/5)*180;
					cout<<"el total a pagar es"<<unidades<<endl;
				}else{
					unidades=(40/5)*180;
					cout<<"el total a pagar es"<<unidades<<endl;
				}
			}
			
			
		
		system("PAUSE");
		return 0;
		
		
	}
