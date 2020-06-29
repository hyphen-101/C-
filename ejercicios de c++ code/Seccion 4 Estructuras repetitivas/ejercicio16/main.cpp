#include <iostream>
#include <conio.h>
using namespace std;
/*
Realice un programa que calcule la descomposicion en 
factores primos de un numero entero.
Por ejemplo: 20=2*2*5
*/
int main() {
	int num;
	
	cout<<"Digite el numero a descomponer: ";cin>>num;
	

	for(int i=2; i<=num; i++){
		while(num%i==0){
			cout<<i<<" ";
			num/=i;
		}
	}
	
	
	
	getch();
	return 0;
}
