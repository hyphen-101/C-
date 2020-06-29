#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

/*escriba un programa que calcule el valor de:
2^1+2^2+2^3+..+2^n*/
int main() {
	
	int num,x,suma;
	cout<<"Digite el numero de elementos: ";cin>>num;
	
	for(int i=1;i<=num;i++){
		x=pow(i,2);
		suma+=x;
	}
	
	cout<<"\nla suma del conjuta de numeros en potencia es: "<<suma<<endl;
	
	system("pause");
	return 0;
}
