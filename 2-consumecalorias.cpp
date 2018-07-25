#include <iostream>
#include <stdlib.h>

	using namespace std;
	int main(){
			float horasactividad;
			int opcion;
			cout<<"que actividad desea saber las calorias consumidas \n 1 dormir\n 2 sentado o reposo ?";
			cin>>opcion;
			if (opcion==1){
				cout<<"ingrese las horas que durmio";
				cin>>horasactividad;
				cout<<"las calorias que consumio durmiendo son"<<(1.08*horasactividad);
			}else if(opcion==2){
				cout<<"ingrese las horas en reposo o sentado";
				cin>>horasactividad;
				cout<<"las calorias que consumio durmiendo son"<<(1.66*horasactividad);
		
			}			
		
		system("PAUSE");
		return 0;
		
		
	}
