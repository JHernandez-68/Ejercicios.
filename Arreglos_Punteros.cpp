//Arreglos y punteros.
#include <iostream>
using namespace std;
int main(){
	int arreglo[]={1,2,3,4,5,6};
	int *direccion_arreglo;
	direccion_arreglo=arreglo;
	
	for(int i=0;i<5;i++){
		cout<<"Arreglo ["<<i<<"] es: "<<*direccion_arreglo<<endl;
		cout<<"Dirreccion de memoria arreglo ["<<i<<"] es: "<<direccion_arreglo<<endl;
		direccion_arreglo++;
	}
	return 0;
}
