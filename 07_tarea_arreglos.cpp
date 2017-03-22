#include <iostream>
#include <iomanip> //se usa para agregar espacios en la salida

using namespace std;

int main(){
	//Esto no estaba antes.... :P
	//Declaración e inicialización del arreglo de 10 elementos de tipo int
	int a[10]={3,56,4,2,30,12,6,4,73,49};
	
	float promedio = 0;

	//Mostrar el valor de la información almacenada en el arreglo 
	
	for(int j=0; j<10;j++){
		//Impresión del índice del arreglo y del valor (j y a[j], respectivamente) 

		/*
		Acumulador para calcular el promedio.
		El operador += equivale a escribir: 
		promedio = promedio + a[j];
		*/ 
	}
	
	/*
	El cálculo del promedio se realiza en la misma línea en la que se 
	imprime.
	*/
	cout<<"El promedio de los números fue: "<<promedio/10;
	
	cin.get();
	
	return 0;
}