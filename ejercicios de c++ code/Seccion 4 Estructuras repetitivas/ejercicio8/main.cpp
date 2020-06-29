#include <iostream>
#include <conio.h>
using namespace std;
/*
Escriba un programa que calcule el valor de: 
1+2+3+5+...n
*/
int main() {
	int n,suma=0;
	 
	cout<<"Digite la cantidad de ciclos: ";cin>>n;
	
	
	for(int i=0; i<=2*n-1; i++){
		if(i%2 != 0){
			cout<<" + "<<i;
			suma+=i;
		}
			
	}
	
	cout<<" = "<<suma;
	getch();
	return 0;
}
