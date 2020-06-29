
/*Ejercicio 10:
Escriba un programa que calcule las soluciones
de una ecuacion de segundo grado de la forma 
ax^2+bx+c=0,
teniendo en cuenta la formula de ecuacion de segundo grado*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float a,b,c,x1_res=0,x2_res=0;
	
	cout<<"Digite el numero a: ";cin>>a;
	cout<<"Digite el numero b: ";cin>>b;
	cout<<"Digite el numero c: ";cin>>c;
	
	x1_res= ((b*-1) + sqrt(pow(b,2)-(4*(a*c)))) / (2*a);
	x2_res= ((b*-1) - sqrt(pow(b,2)-(4*(a*c)))) / (2*a);
	
	cout<<"\nX1 es igual a: "<<x1_res<<endl; 
	cout<<"X2 es igual a: "<<x2_res<<endl; 

	
	return 0;
}
