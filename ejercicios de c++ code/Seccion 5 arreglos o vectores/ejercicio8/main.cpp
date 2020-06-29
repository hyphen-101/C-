#include <iostream>
#include <conio.h>
using namespace std;

/*Hacer un programa que lea 5 numeros en un arreglo, los 
copie a otro arreglo multiplicados por 2 y muestre el
segundo arreglo.*/
int main() {
	int v1[5]={1,2,3,4,5},v2[5];
	
	for(int i=0; i<5; i++){
		v2[i]=v1[i]*2;
	}
	
	for(int i=0; i<5; i++){
		cout<<v2[i]<<endl;
	}

	
	getch();
	return 0;
}
