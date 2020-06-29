#include <iostream>
#include <stdlib.h>
using namespace std;

/*Suma de elementos de un arreglo*/
int main() {
	int v1[5]={1,2,3,4,5};
	int suma=0;
	
	for(int i=0; i<5; i++){
		suma+=v1[i];
	}
	
	cout<<suma<<endl;
	
	system("pause");
	return 0;
}
