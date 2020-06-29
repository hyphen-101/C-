/*Escribe un programa que lea de la entrada estandaar tres 
numeros. Despues debe leer un cuarto numero e indicar si
el numero coincide con alguno de los introducidos con 
anterioridad.*/
#include <iostream>
using namespace std;

int main() {
	int n1,n2,n3,n4;
	
	cout<<"Digite 3 numeros: ";cin>>n1>>n2>>n3;
	cout<<"Digite un numero mas: ";cin>>n4;
	
	if(n4 == n1 || n4 == n2 || n4 == n3){
		cout<<"\nEl cuarto numero coicide con un numero de los anteriores";
	}
	else{
		cout<<"\nEl numero no coicide con ninguno de los anteriores";
	}
	
	return 0;
}
