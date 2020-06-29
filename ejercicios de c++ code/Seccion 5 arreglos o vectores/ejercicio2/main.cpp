#include <iostream>
#include <stdlib.h>
using namespace std;
/*Escribe un programa que defina un vector de numeros y
calcule la multiplicacion acumulada de sus elementos*/
int main() {
	
	int vector[5]={1,2,3,4,5};
	int mult=1;
	
	for(int i=0; i<5; i++){
		mult*=vector[i];
	}
	
	cout<<mult<<endl;
	
	system("pause");
	return 0;
}
