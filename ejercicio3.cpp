#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int cantida,valor,iva,vtotal,totaliva;
	char nombre[10];
	cout<<"ingrese el nombre del producto";
	cin>>nombre;
	cout<<"ingrese el valor del producto";
	cin>>valor;
	cout<<"ingrese el iva del producto";
	cin>>iva;
	totaliva=(valor*iva)/100;
	vtotal=valor+totaliva;
	cout<<"el valor total es:"<<vtotal<<endl;
	system("PAUSE");
	return 0;
	
}
