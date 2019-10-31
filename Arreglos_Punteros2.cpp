//Ejericio 3: Rellenar una array de 10 numeros, luego usando punteros indicar cuales son pares y su posicion en memoria
#include<iostream>
using namespace std;
int main(){
	
	int numeros[10], *dir_numeros;
	dir_numeros=numeros;
	
	for(int i=0; i<10;i++){
		cout<<"Digite un numero>";
		cin>>numeros[i];
	}
		
	for(int i=0; i<10;i++){
		
		if(*dir_numeros%2==0){
		cout<<"\t Numeros pares del arreglo: "<<endl;
		cout<<"Arreglo ["<<i<<"] es "<<*dir_numeros<<endl;
		cout<<"Arreglo  memoria ["<<i<<"] es "<<dir_numeros<<endl;
		}
		dir_numeros++;
	}
	return 0;
}
