#include <iostream>
#include <stdlib.h>
using namespace std;
/*En una clase 5 alumnos se han realizado tres examenes
y se requiere determinar el numero de:
a) Alumnos que aprobaron todos los examenes
b) Alumnos que aprobaron al menos un examen
c) Alumnos que aprobaron unicamente el ultimo examen
*/
int main() {
	float ex1,ex2,ex3,min=10.5;
	int alumnos1=0,alumnos2=0,alumnos3=0;
	
	for(int i=1; i<=5; i++){
		cout<<"Alumno "<<i<<": "<<endl;
		cout<<"digite nota del primer examen: ";cin>>ex1;
		cout<<"digite nota del segundo examen: ";cin>>ex2;
		cout<<"digite nota del tercer examen: ";cin>>ex3;
		cout<<"\n";
		
		if((ex1>min)&&(ex2>min)&&(ex3>min)){
			alumnos1++;
		}
		if((ex1>min)||(ex2>min)||(ex3>min)){
			alumnos2++;
		}
		if((ex1<min)&&(ex2<min)&&(ex3>min)){
			alumnos3++;
		}
	}
	
	cout<<"\nAlumnos que aprobaron todos los examenes: "<<alumnos1<<endl;
	cout<<"\nAlumnos que aprobaron uno de los examenes: "<<alumnos2<<endl;
	cout<<"\nAlumnos que aprobaron unicamente el ultimo examen: "<<alumnos3<<endl;
	
	system("pause");
	return 0;
}
