#include <iostream>
#include <conio.h>
using namespace std;
/*Hacer un programa que calcule el resultado de la
siguiente expresion:
1-2+3-4+5-6..n*/
int main() {
	
	int neg_pos,mult=-1,suma=0,n;
	
	cout<<"Digite el numero de elementos: ";cin>>n;
	
	for(int i=1; i<=n; i++){
		mult= mult *-1;
		neg_pos=i*mult;
		cout<<neg_pos<<"\n+"<<endl;
		suma += neg_pos;
	}
	cout<<" = "<<suma<<endl;
	
	getch();
	return 0;
}
