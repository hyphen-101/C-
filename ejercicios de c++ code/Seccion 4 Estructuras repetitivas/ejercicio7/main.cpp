#include <iostream>
#include <conio.h>
using namespace std;

/*Escriba un programa que calcule el valor de:
1+2+3+4+5+..+n*/
int main() {
	int n, res;
	cout<<"Digite la cantidad de ciclos a ejecutar: ";cin>>n;
	
	for(int i=1; i<=n; i++){
		cout<<i<<"+";
		res+=i;
	}
	cout<<" = "<<res;
	
	getch();
	return 0;
}
