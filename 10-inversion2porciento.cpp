#include <iostream>
#include <stdlib.h>

	using namespace std;
	int main(){
			int inversion,interes;
			int i=0;
			cout<<"Digite la inversion que hizo";
			cin>>inversion;
			while (i<=12){
				interes=inversion*2/100;
				inversion=interes+inversion;
				
				i++;
				
			}
				cout<<"la ganancia que tendra al año si es reinvertida mensualmente es:"  <<inversion<<endl;
			
		system("PAUSE");
		return 0;
		
		
	}
