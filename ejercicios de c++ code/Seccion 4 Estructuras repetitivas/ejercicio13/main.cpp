#include <iostream>
#include <stdlib.h>
using namespace std;

/*Hacer un programa que realice la seria fibonacci*/

int main() {
	int f1=0,f2=1,aux,n;
	
	cout<<"Digite el numero de elementos: ";cin>>n;
	
	for(int i=0; i<=n; i++){
		aux=f1;
		f1=f2;
		f2+=aux;	
		cout<<aux<<" ";
	}
	cout<<endl;
	system("pause");
	return 0;
}
