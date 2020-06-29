/*Escriba un programa que solicite una edad (un entero) e
indique en la salida estandar si la edad introducida esta
en el rango [18-25]*/

#include <iostream>
using namespace std;

int main() {
	int edad;
	
	cout<<"Digite su edad: ";cin>>edad;
	
	if(edad>=18 && edad<=25){
		cout<<"\nEdad dentro del rango de 18 a 25 anios"<<endl;
	}
	else{
		cout<<"\nEdad fuera del rango"<<endl;
	}
	
	return 0;
}
