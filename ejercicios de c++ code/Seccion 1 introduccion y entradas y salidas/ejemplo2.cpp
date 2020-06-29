#include <iostream>
using namespace std;
/*Escribe un programa que lea de la entrada estandar el
precio de un producto y muestre en la salida estandar el
precio del producto al aplicarle el iva*/

int main() {
	float precio = 0, iva = 0;
	
	cout<<"Digite el precio del producto: "; cin>>precio;
	
	iva = precio * .16;//IVA mexicano
	precio += iva;
	
	cout<<"\nEl total del producto es: "<< precio;
	
	return 0;
}
