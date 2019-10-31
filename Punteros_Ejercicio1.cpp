//Comprobar si un numero es par o impar con punteros y mostrar su direccion de memoria xd
#include <iostream>
using namespace std;
int main(){
	
	int numero, *direccion_numero;
	cout<<"Digite un numero \n";
	cin>>numero;
	
	direccion_numero=&numero;

	if(*direccion_numero%2==0){
		cout<<"El numero: "<<*direccion_numero<<" es par"<<endl;
		cout<<"Direccion de memoria: "<<direccion_numero;
	}
	
	else{
		cout<<"El numero: "<<*direccion_numero<<" es impar"<<endl;
		cout<<"Direccion de memoria: "<<direccion_numero;
	}
		
	return 0;
}
