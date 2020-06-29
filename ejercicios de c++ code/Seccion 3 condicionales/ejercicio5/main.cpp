#include <iostream>
using namespace std;

/*Escriba un programa que lea de la entrada estandar un 
caracter e indique en la salida estandar si el caracter
es una vocal minuscula o no.*/
int main() {
	
	char vocal;
	
	cout<<"Digite una vocal: ";cin>>vocal;
	
	switch(vocal){
		case 'a': 
			
		case 'e': 
			
		case 'i': 
			
		case 'o': 
			
		case 'u': 
			cout<<"El caracter es una vocal minuscula";
			break;
		default :
			cout<<"El caracter no es una vocal minuscula";
			break;
	}
	
	return 0;
}
