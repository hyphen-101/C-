#include <iostream>
#include <stdlib.h>
using namespace std;
/*Escribe un programa que defina un vector de numeros
y calcule si existe algun numero en el vector cuyo 
valor equivale a la suma del resto de numeros del vector*/
int main() {
	int v[5]={1,4,3,10,2};
	int suma,num=0;
	
	for(int i=0; i<5; i++){
		suma+=v[i];
	}
	for(int i=0; i<5; i++){
		if(suma-v[i] == v[i]){
			num=v[i];
			cout<<"El numero "<<num<<" equivale a la suma del resto"<<endl;
		}
		
	}
	
	if(num == 0){
		cout<<"Ningun valor numerico del vector equivale a la suma del resto"<<endl;
	}
	
	return 0;
}
