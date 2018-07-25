#include <iostream>
#include <stdlib.h>

	using namespace std;
	int main(){
			float inversion1,inversion2,inversion3,sumatotal,porc1,porc2,porc3;
			cout<<"ingrese la inversion de la primera persona";
			cin>>inversion1;
			cout<<"ingrese la inversion de la segunda persona";
			cin>>inversion2;
			cout<<"ingrese la inversion de la tercera persona";
			cin>>inversion3;
			sumatotal=inversion1+inversion2+inversion3;
			porc1=inversion1*100/sumatotal;
			cout<<"el porcentaje del primer inversionista es"<<porc1<<endl;
			porc2=inversion2*100/sumatotal;
			cout<<"el porcentaje del segundo inversionista es"<<porc2<<endl;
			porc3=inversion3*100/sumatotal;
			cout<<"el porcentaje del segundo inversionista es"<<porc3<<endl;
		
		system("PAUSE");
		return 0;
		
		
	}
