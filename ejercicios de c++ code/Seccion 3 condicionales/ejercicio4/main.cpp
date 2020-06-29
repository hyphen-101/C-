/*Comprobar si un numero digitado por el usuario es
es positivo o negativo.*/
#include <iostream>
using namespace std;

int main() {
	float numero;
		
	cout<<"Digite un numero: ";cin>>numero;
	
	if(numero>0){
		cout<<"\nEl numero es positivo"<<endl;
	}
	else{
		cout<<"\nEl numero es negativo"<<endl;
	}
	
	return 0;
}
