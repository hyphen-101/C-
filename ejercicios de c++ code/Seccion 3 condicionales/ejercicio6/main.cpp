#include <iostream>
using namespace std;

/*Escriba un programa que lea de la entrada estandar un
caracter e idique en la salida estadar si el caracter es una
vocal minuscula, es una vocal mayuscula o no es una vocal-*/

int main() {
	char caracter;
	
	cout<<"Digite un caracter: ";cin>>caracter;
	
	switch(caracter){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			cout<<"\nEl caracter es una vocal mayuscula";
			break;
		default :
				switch(caracter){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				cout<<"\nEl caracter es una vocal minuscula";
				break;
			default :
				cout<<"\nEl caracter no es una vocal";
			}	
	}
	
	return 0;
}
