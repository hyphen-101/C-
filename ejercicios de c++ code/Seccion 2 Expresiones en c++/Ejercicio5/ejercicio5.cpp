/*Ejercicio 5:
Escriba un fragmento de programa que intercambie
los valores de dos variables.*/
#include <iostream>
using namespace std;

int main() {
	int x, y,aux;
	
	cout<<"Digite el numero x: ";cin>>x;
	cout<<"Digite el numero y: ";cin>>y;
	
	aux=x;
	x=y;
	y=aux;
	
	cout<<"\n x="<<x<<"\n y="<<y<<endl;
	
	return 0;
}
