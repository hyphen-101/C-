#include <iostream>
#include <stdlib.h>
using namespace std;
/*Escriba un programa que calcule el valor de: 1!+2!+3!..n
suma de factoriales.*/

int main() {
	int num,facto=1,sum_facto=0;
	
	cout<<"Digite el numero de ciclos: ";cin>>num;
	
	for(int i=1; i<=num; i++){
		facto*=i;
		sum_facto+=facto;
	}
	
	cout<<"la suma de factoriales es: "<<sum_facto<<endl;
	
	system("pause");
	return 0;
}
