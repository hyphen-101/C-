#include <iostream>
#include <conio.h>
using namespace std;
/*Desarrolle un programa que lea de la entrada estandar un
vector de enteros y determine el mayor elemento del vector*/

int main() {
	int v[100];
	int v_mayor=0,n;
	
	cout<<"Digite el numero de elementos del vector: ";cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<i+1<<". Digite un numero: ";cin>>v[i];
	}
	
	for(int i=0; i<n; i++){
		if(v[i]>v_mayor){
			v_mayor = v[i];
		}
	}
	
	cout<<"\nEl mayor elemento del vector es: "<<v_mayor;
	
	getch();
	return 0;
}
