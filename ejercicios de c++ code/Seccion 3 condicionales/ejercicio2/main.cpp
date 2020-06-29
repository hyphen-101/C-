/*escriba un programa que lea tres numeros y determine 
cual de ellos es el mayor*/
#include <iostream>
using namespace std;

int main() {
	float n1,n2,n3;
	
	cout<<"Digite el primer numero: ";cin>>n1;
	cout<<"Digite el segundo numero: ";cin>>n2;
	cout<<"Digite el tercer numero: ";cin>>n3;
	
	if(n1>=n2 && n1>=n3){
		cout<<"\nEl numero1 {"<<n1<<"} es el mayor de todos"<<endl;
	}
	else if(n1<=n2 && n2>=n3){
		cout<<"\nEl numero2 {"<<n2<<"} es el mayor de todos"<<endl;
	}
	else{
		cout<<"\nEl numero3 {"<<n3<<"} es el mayor de todos"<<endl;
	}

	
	
	return 0;
}
