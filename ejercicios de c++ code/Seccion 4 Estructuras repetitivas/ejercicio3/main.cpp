#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

/*Realice un programa que calule y muesstre en la salida
enstandar la suma de los cuadrados de los 10 primeros
enteros mayores que cero*/
int main() {
	int sum = 0,num=0;
	/*
	do{
		cout<<"Digite un numero: ";cin>>num;
		if(num>0){
			sum += pow(num,2);		
		}	
	}while(num!=0);
	*/
	
	for(int i=1; i<=10; i++){
		num = pow(i,2);
		sum += num;
	}
	cout<<"\nLa suma de los cuadrados es: "<<sum<<endl;
	
	getch();
	return 0;
}
