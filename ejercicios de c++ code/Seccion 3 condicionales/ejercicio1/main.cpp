/*Escriba en un programa que lea dos numeros y determine
cual de ellos es el mayor*/
#include <iostream>
using namespace std;

int main() {
	int n1, n2;
	
	cout<<"Digite un numero: ";cin>>n1;
	cout<<"Digite otro numero: ";cin>>n2;

	if(n1>n2){
		cout<<"\nEl primero numero {"<<n1<<"} es mayor que el segundo numero"<<endl;
	}
	else{
		cout<<"\nEl segundo numero {"<<n2<<"} es mayor que el primer numero"<<endl;
	}
	return 0;
}
