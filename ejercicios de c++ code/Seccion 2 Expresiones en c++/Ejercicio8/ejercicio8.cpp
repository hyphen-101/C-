/*Ejercicio8:
Escriba un programa que lea de la entrada estandar
los dos catetos de un triangulo y escriba en la salida
estandar su hipotenusa
*/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float cat_a, cat_b, hipotenusa=0;
	
	cout<<"Digite el numero de cateto 'a': ";cin>>cat_a;
	cout<<"Digite el numero de cateto 'b': ";cin>>cat_b;
	
	hipotenusa = sqrt((pow(cat_a,2))+(pow(cat_b,2)));
	
	cout.precision(2);
	cout<<"\nLa hipotenusa es: "<<hipotenusa<<endl;
	
	return 0;
}
