#include <iostream>
using namespace std;
/*Realice un programa que solicite de la entrada estandar
un entero del 1 al 10 y muestre en la salida estandar su
tabla de multiplicar.*/

int main() {
	int num,mult=0;
	
	cout<<"Digite un numero del 1 al 10: ";cin>>num;
	
	for(int i=0; i<=10; i++){
		mult= num * i;
		cout<<num<<" X "<<i<<" :"<<mult<<endl;
	}
	return 0;
}
