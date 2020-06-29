#include <iostream>
#include <conio.h>
using namespace std;
/*Escribe un programa que lea de la entrada estandar un 
vector de numeros y muestre en la salida estandar los
numeros del vector con sus indices asociados*/
int main() {
	
	int v[100],n;
	
	cout<<"Digite el numero de elementos del vector: ";cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Digite un numero en el vector: ";
		cin>>v[i];	
	}
	
	for(int i=0; i<n; i++){
		cout<<"index "<<i<<" => value: "<<v[i]<<endl;
	}
	
	
	getch();
	return 0;
}
