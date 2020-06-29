#include <iostream>
using namespace std;
/*
Ejercicio 2:
Escribe la siguiente expresion matematica como expresion
en c++ a+b / c+d */
int main() {
	
	float a,b,c,d,resultado = 0;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	cout<<"Digite el valor de c: "; cin>>c;
	cout<<"Digite el valor de d: "; cin>>d;
	
	resultado = (a+b) / (c+b);
	
	cout<<"\n("<<a<<" + "<<b<<") / ("<<c<<" + "<<d<<") es: ";
	cout.precision(3);
	cout<<resultado<<endl;
	
	return 0;
}
