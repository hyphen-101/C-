#include <iostream>
#include <stdlib.h>
using namespace std;

/*Realizar un programa que defina dos vectores de carecteres
y despues almacene el contenido de ambos vectores en un
nuevo vector, situado en primer lugar los elementos del
del primer vector seguido por los elementos del segundo
vector. Muestre el contenido del nuevo vector en la 
salida estandar.*/

int main(){
	char v1[5]={'a','b','c','d','e'},v2[5]={'f','g','h','i','j'};
	char vector[100];
	
	for(int i=0; i<5; i++){
		vector[i]=v1[i];
	}
	
	for(int i=5; i<10; i++){
		vector[i]=v2[i-5];
	}
	
	for(int i=0; i<10; i++){
		cout<<vector[i]<<endl;
	}
	
	system("pause");
	return 0;
}
