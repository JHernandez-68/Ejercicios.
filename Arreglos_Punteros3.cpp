/* Asignacion dinamica de arreglos

	new: Reserva el numero de bytes solicitado por la declaracion
	
	delete: Libera un bloque de bytes solicitado con anterioridad
	
	Para usar New y Delete se usa la libreria stdlib.h
	
	Ejercicio 3: Guardar y mostrar notas de n estudiantes con un arreglo dinamico
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

//Funciones
void PedirNota();
void Mostrar();

//Variables globales para usar en las dos funciones
int NumNotas, *Dir_Notas; 

void PedirNota(){
	
	cout<<"Digite el numero de calificaciones: ";
	cin>>NumNotas;
	Dir_Notas= new int[NumNotas];
	
	for(int i=0; i<NumNotas;i++){
		cout<<"Digite una nota: ";
		cin>>Dir_Notas[i];
	}
	
}

void Mostrar(){
	cout<<"Calificaciones: "<<endl;
	for(int i=0; i<NumNotas; i++){
		cout<<Dir_Notas[i];
		cout<<"Direccion de memoria "<<&Dir_Notas++<<endl;
	}
}
int main(){
	
	PedirNota();
	Mostrar();
	
	delete[] Dir_Notas;
	
	return 0;
}
