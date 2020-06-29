#include <iostream>
using namespace std;

/*Realice un programa que lea de la entrada estandar 
numeros hasta que se introduzca un cero. En ese momento
el programa debe terminar y mostrar en la salida estandar
el numero de valores mayores que cero leidos.*/
int main() {
	
	int i=0, num;
	
	do{
		cout<<"Digite un numero: ";cin>>num;
		
		if(num>0){
			i++;
		}
	}while(num!=0);
	
	cout<<"\nEl numero de valores mayores a cero introducidos es: "<<i;
	
	return 0;
}
