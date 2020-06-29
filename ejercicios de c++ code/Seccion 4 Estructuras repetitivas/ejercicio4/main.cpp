#include <iostream>
#include <conio.h>
using namespace std;
/*Escriba un programa que tome cada 4 horas la temperatura
exterior, leyendola durante un periodo de 24horas. Es
decir, debe leer 6 temperaturas. Calcule la temperatura
media del dia, la temperatura mas alta y la mas baja.*/
int main() {
	float temp=0,media, alta=0, baja=9999;
	
	for(int i=0; i<24; i+=4){
		cout<<"Tomando temperatura exterior: ";cin>>temp;
		cout<<"Temperatura tomada a las: "<<i<<":00:00 horas"<<endl;
		media = (media + temp);
		if(temp>alta){
			alta = temp;
		}
		else if(temp<baja){
			baja=temp;
		}
		cout<<"\n";
	}
	
	media /=6;
	cout<<".:Resultados:."<<endl;
	cout<<"\nLa media de temperatura del dia es: "<<media<<endl;
	cout<<"\nLa temperatura mas alta del dia es: "<<alta<<endl;
	cout<<"\nLa temperatura mas baja del dia es: "<<baja<<endl;


	getch();
	return 0;
}
