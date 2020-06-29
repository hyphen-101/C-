#include <iostream>
#include <math.h>
using namespace std;

/*Hacer un menu que cosidere las siguientes opciones:
caso 1: Cubo de un numero
caso 2: Numero par o impar
caso 3 salir
*/

int main() {
	int op, num;
	
	cout<<"Opcion 1: Cubo de un numero";
	cout<<"\nOpcion2: Numero par o impar";
	cout<<"\nOpcion 3: Salir"<<endl;
	cout<<"Seleccione una opcion: ";cin>>op;
	
	switch(op){
		case 1:
			cout<<"Digite un numero: ";cin>>num;
			num = pow(num,3);
			cout<<"\nEl cubo del numero es: "<<num<<endl;
			break;
		case 2:
			cout<<"Digite un numero: ";cin>>num;
			if(num % 2 == 0){
				cout<<"\nEl numero es par"<<endl;
			}
			else{
				cout<<"\nEl numero es impar"<<endl;
			}
			break;
		case 3: break;
		default: 
			cout<<"La opcion digitada no es valida"<<endl;
	}
	
	
	
	return 0;
}
