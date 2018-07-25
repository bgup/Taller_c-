#include <iostream>
#include <stdlib.h>

	using namespace std;
	int main(){
			int n,multiplicacion;
			cout<<"digite el numero que quiere saber la tabla de multiplicar";
			cin>>n;
			for (int i=0;i<=10;i++){
				multiplicacion=i*n;
				cout<<n<<"x"<<i<<"="<<multiplicacion<<endl;
				
			}
		
		system("PAUSE");
		return 0;
		
		
	}
