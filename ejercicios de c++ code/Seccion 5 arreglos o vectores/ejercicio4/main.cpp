#include <iostream>
#include <stdlib.h>
using namespace std;
/*Escribe un programa que defina un vector de numeros 
y muestre en la salida estandar el vector en orden inverso
del ultimo al primer elemento.*/
int main() {
	
	int v[100],n;
	
	cout<<"Digite el numero de elementos del vector: ";cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Digite un numero: ";cin>>v[i];
	}
	cout<<"\n";
	
	for(int i=n-1; i>=0; i--){
		cout<<i<<" : "<<v[i]<<endl;
	}
	
	system("pause");
	return 0;
}
