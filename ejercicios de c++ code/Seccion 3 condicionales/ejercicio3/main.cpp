/*Realice un programa que lea un valor entero y determine
si se trata de un numero par o impar*/
#include <iostream>
using namespace std;

int main() {
	int numero;
	
	cout<<"Digite un numero: ";cin>>numero;
	
	if(numero == 0){
		cout<<"\nEl numero es 0. Numero no valido"<<endl;
	}
	else if(numero % 2 == 0 && numero>0){
		cout<<"\nNumero par"<<endl;
	}
	else{
		cout<<"\nNumero impar"<<endl;
	}
	
	return 0;
}
