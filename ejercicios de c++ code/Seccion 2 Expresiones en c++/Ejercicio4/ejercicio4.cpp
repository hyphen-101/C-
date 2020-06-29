#include <iostream>
using namespace std;
/*Ejercicio 4:
Escribe la siguiente expresion como expresion de c++:
a+b/(c-d).*/
int main() {
	float a,b,c,d,resultado=0;
	
	cout<<"Digite el numero a: ";cin>>a;
	cout<<"Digite el numero b: ";cin>>b;
	cout<<"Digite el numero c: ";cin>>c;
	cout<<"Digite el numero d: ";cin>>d;
	
	resultado = a+b/(c-d);
	
	cout<<"\nEl resultado es: "<<resultado;
	return 0;
}
