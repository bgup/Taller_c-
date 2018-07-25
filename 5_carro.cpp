#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int valor,devaluo,valorizacion,mitad;
	
	cout << "Ingrese el valor del inmueble" << endl;
	cin >> valor;
	
	devaluo = ((valor*0.10)*3)-valor;
	valorizacion = ((valor*0.30)*3)+valor;
	mitad = valorizacion/2;
	
	if(devaluo<mitad){
		
		cout << "Durante los 3 anios la devaluacion no es mayor a la mitad de la valorizacion \nCompre el automovil\n"<<"Devaluacion = "<<devaluo<<"\nValorizacion = "<<mitad<<endl;
		
	}else{
		
	}
	
	system("PAUSE");
	return 0;
}
