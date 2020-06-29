/*Ejercicio 7:
La calificacion final de un estudiante es el 
promedio de tres notas:

la nota de practicas que cuenta un 30% del total.
la nota teorica que cuenta un 60%.
la nota de participacion que cuenta el 10% restante

Escriba un programa que lea las tres notas del
alumno y escriba su nota final*/
#include <iostream>
using namespace std;

int main() {
	float n1,n2,n3,notaFinal=0;
	
	cout<<"Digite la nota de practicas: ";cin>>n1;
	cout<<"Digite la nota teorica: ";cin>>n2;
	cout<<"Digite la nota de participacion: ";cin>>n3;
	
	n1*=.30;
	n2*=.60;
	n3*=.10;
	
	notaFinal = n1+n2+n3;
	
	cout<<"\nLa nota final es: "<<notaFinal<<endl;
	
	return 0;
}
