#include <iostream>
using namespace std;
/*Hacer un programa que simule cajero automatico con un
saldo inicial de 1000 Dolares.*/

int main() {
	float saldo = 1000, retiro=0, abono=0, nuevo_balance=0;
	int op;
	
	cout<<".:ATM:."<<endl;
	cout<<"opcion 1.- Retiro de efectivo. "<<endl;
	cout<<"opcion 2.- Deposito de efectivoñ."<<endl;
	cout<<"opcion 3.- Salir."<<endl;
	cout<<"Digite el numero de una opcion: ";cin>>op;
	
	switch(op){
		case 1:
			cout<<"Digite la cantidad que desea retirar: ";
			cin>>retiro;
			if(retiro<saldo){
				nuevo_balance = saldo - retiro;
				cout<<"Gracias por usar ATM. su nuevo balance es: $"<<nuevo_balance<<endl;
				break;
			}
			else{
				cout<<"No tiene esa cantidad de dinero!";
				break;
			}
		case 2:
			cout<<"Digite la cantidad que desee depositar: ";
			cin>>abono;
			nuevo_balance = saldo + abono;
			cout<<"Gracias por usar ATM. su nuevo balance es: $"<<nuevo_balance<<endl;
			break;
		case 3:
			cout<<"Gracias. Hasta la vista"<<endl;
			break;
		default:
			cout<<"Opcion no valida!"<<endl;
	}
	return 0;
}
