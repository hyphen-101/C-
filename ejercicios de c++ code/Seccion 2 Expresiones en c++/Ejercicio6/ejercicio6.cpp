/*Ejercicio 6:
Escriba un programa que lea la nota final de 
cuatro alumnos y calcule la nota final media de
los cuatro alumnos.*/
#include <iostream>
using namespace std;

int main() {
	float a1,a2,a3,a4,nf=0;
	
	cout<<"Digite la nota del primer alumno: ";cin>>a1;
	cout<<"Digite la nota del segundo alumno: ";cin>>a2;
	cout<<"Digite la nota del tercer alumno: ";cin>>a3;
	cout<<"Digite la nota del cuarto alumno: ";cin>>a4;
	
	nf=(a1+a2+a3+a4)/4;
	cout.precision(2);
	cout<<"\nLa nota final media de los 4 alumnos es: "<<nf<<endl;
	
	return 0;
}
