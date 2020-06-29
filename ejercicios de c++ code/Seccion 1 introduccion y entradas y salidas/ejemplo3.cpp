/*Ejercicio 3: Realice un programa que lea de la entrada 
estandar los siguientes datos de una persona:
Edad: dato de tipo entero.
Sexo: dato de tipo caracter.
Altura en metros: dato de tipo real.

Tras leer los datos, el programa debe mostrarlos en la
salida estandar.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	int edad;
	string sexo; // tambien se puede usar "char sexo[10];"
	float altura;
	
	cout<<"Digite su edad: "; cin>>edad;
	cout<<"Escriba su sexo: "; cin>>sexo;
	cout<<"Digite su altura: "; cin>>altura;
	
	cout<<"\n\nDatos de usuario: "<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura: "<<altura<<endl;
	
	
	return 0;
}
