#include <iostream>
#include <conio.h>
using namespace std;
/*Escriba un programa que calcule x^y, donde tanto x como y 
son enteros positivos, sin utilizar la funcion pow*/
int main() {
	int x,y,pot=1;
	
	cout<<"Digite el numero X: ";cin>>x;
	cout<<"Digite el numero potencia Y: ";cin>>y;
	
	for(int i=1; i<=y; i++){
		pot*=x;
	}
	
	
	cout<<"\nEl resultado de {"<<x<<"} a la {"<<y<<"}: "<<pot<<endl;
	
	getch();
	return 0;
}
