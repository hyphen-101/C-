#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
/*Realice un programa que solicite al usuario que piense
un numero entero entre el 1 al 100. El programa debe 
generar un numero aleatorio en ese mismo rango[1-100]
e indicarle al usuario si el numero que digito es menor
o mayor al numero aleatorio, asi hasta que lo adivine.
y por ultimo mostrarle el numero de intentos que le llevo.

variable = limite_inferior + rand() % (limite_superior +1 -  limite_inferior);*/

int main() {
	
	int random_num, num, cont=0;
	
	srand (time(NULL));
	
	random_num = rand() % 100 + 1;
	
	do{
		cout<<"\n";
		cout<<"Digite un numero entero entre el 1 al 100: ";cin>>num;
		
		if(num == random_num){
			cout<<"\nGameOver"<<endl;
		}
		else if(num>random_num){
			cout<<"El numero {"<<num<<"}  es mayor al numero aleatorio"<<endl;
		}
		else{
			cout<<"El numero {"<<num<<"}  es menor al numero aleatorio"<<endl;
		}
		cont++;
		
	}while(random_num != num);
	
	cout<<"\nFelizidades haz ganado\n Intentos: "<<cont<<endl;
	
	system("pause");
	return 0;
}
