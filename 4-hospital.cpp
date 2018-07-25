#include <iostream>
#include <stdlib.h>

	using namespace std;
	int main(){
			float montopres;
			cout<<"ingrese el monto presupuestal para el hospital";
			cin>>montopres;
			cout<<"a ginecologia le corresponde"  <<(montopres*40)/100<<endl;
			cout<<"a traumatologia le corresponde"  <<(montopres*30)/100<<endl;
			cout<<"a ginecologia le pediatria"  <<(montopres*30)/100<<endl;
		
		system("PAUSE");
		return 0;
		
		
	}
