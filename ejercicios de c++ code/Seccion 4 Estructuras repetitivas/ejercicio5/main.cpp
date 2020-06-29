#include <iostream>
#include <conio.h>
using namespace std;
/*Escriba un programa que lea valores enteros hasta que
se introduzca un valor en el rango [20 - 30] o se 
introduzca el valor 0. El programa debe entregar la suma
de los valores mayores a 0 introducidos	*/
int main() {
	
	int num,suma=0;
	do{
		cout<<"digite un numero: ";cin>>num;
		if(num>0){
			suma+=num;
			if(num>=20&&num<=30){
				break;
			}
		}
	}while(num!=0);
	
	cout<<"\nla suma de los valores mayores a 0 es:"<<suma<<endl;
	getch();
	return 0;
}
