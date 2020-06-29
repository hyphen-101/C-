/*
Cambiar un numero entero con el mismo valor pero en romanos
M = 1000
D = 500
C = 100
L = 50
X = 10
V = 5
I = 1
*/
#include <iostream>
using namespace std;

int main() {
	int numero, M,m,C,c,X,x,I;
	
	cout<<"Digite un numero: ";cin>>numero;
	
	M = numero / 1000; m = numero % 1000;
	C = m / 100; c = m % 100;
	X = c / 10; x = c % 10;
	I = x / 1;

	switch(M){
		case 1:
			cout<<"M";
			break;
		case 2:
			cout<<"MM";
			break;
		case 3:
			cout<<"MMM";
			break;
		case 4:
			cout <<"M~V";
			break;
		case 5:
			cout<<"~V";
			break;
		case 6:
			cout<<"~V~I";
			break;
		case 7:
			cout<<"~V~I~I";
			break;
		case 8:
			cout<<"~V~I~I~I";
			break;
		case 9:
			cout<<"~I~X";
			break;
	}
	switch (C){
		case 1: 
			cout<<"C";
			break;
		case 2:
			cout<<"CC";
			break;
		case 3:
			cout<<"CCC";
		case 4:
			cout<<"CD";
			break;
		case 5:
			cout<<"D";
			break;
		case 6:
			cout<<"DC";
			break;
		case 7:
			cout<<"DCC";
			break;
		case 8:
			cout<<"DCCC";
			break;
		case 9:
			cout<<"CM";
			break;
	}
	switch(X){
		case 1:
			cout<<"X";
			break;
		case 2:
			cout<<"XX";
			break;
		case 3:
			cout<<"XXX";
			break;
		case 4:
			cout<<"XL";
			break;
		case 5:
			cout<<"L";
			break;
		case 6:
			cout<<"LX";
			break;
		case 7:
			cout<<"LXX";
			break;
		case 8:
			cout<<"LXXX";
			break;
		case 9:
			cout<<"XC";
			break;		
	}
	switch(I){
		case 1:
			cout<<"I";
			break;
		case 2:
			cout<<"II";
			break;
		case 3:
			cout<<"III";
			break;
		case 4:
			cout<<"IV";
			break;
		case 5:
			cout<<"V";
			break;
		case 6:
			cout<<"VI";
			break;
		case 7:
			cout<<"VII";
			break;
		case 8:
			cout<<"VIII";
			break;
		case 9:
			cout<<"IX";
			break;
	}

	
	return 0;
}
