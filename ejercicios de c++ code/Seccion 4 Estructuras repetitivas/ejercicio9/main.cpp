#include <iostream>
#include <conio.h>
using namespace std;

/*Escriba un programa que calcule el valor de : 1*2*3*..n
(factorial de un numero)*/
int main() {
	
	int facto;
	
	cout<<"Digite el numero factorial: ";cin>>facto;
	if(facto == 0){
		cout<<"\n"<<1;
	}
	else{
		for(int i=facto-1; i>0; i--){
			facto*=i;	
		}
		cout<<"\n"<<facto;
	}
	
	getch();
	return 0;
}
