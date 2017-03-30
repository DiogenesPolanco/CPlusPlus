/*
Este programa debe determinar el número que más se repite dentro de los
ingresados por un usuario en un arreglo.
*/

#include <iostream>
#include <iomanip> //se usa para agregar espacios en la salida

using namespace std;

int main(){
	
	int tam = 0; //Tamaño del arreglo
	
	/*
	Número más grande de los ingresados, inicializa con el valor
	INT_MIN, que es el número más pequeño posible para el tipo de dato entero
	*/
	int num_mayor = INT_MIN; 	
	int frec_alta = INT_MIN; //Número con frecuencia más alta
	
	cout<<"Cuantos numeros desea ingresar? ";
	cin>>tam;
	
	int a[tam]; //Declaración del arreglo de tipo entero
	
	//Captura de los valores
	for(int i=0;i < tam; i++){
		
		//usar un ciclo do-while para evitar que el usuario ingrese números negativos		
		//inicia con do-while		
		// pedirle al usuario que inserte el valor
		//Los valores se almacenan directamente en una posición del arreglo
		//termina do-while: hacer mientras ingrese un número negativo
		//Encontrar si el número ingresado es el más grande

		cout << "type a value: " << endl;
		do{
			if(tam < 0){
				cout << "Cannot type nevative numbers";
				  break;
			else (a=0;a<tam;a++);
			cin >> a[tam];
				  } 
		} while (a !=-0);

		for (a=0;a>=tam;a++);		 
	}
	for (int e=0; e<tam; e++){
		if (a[tam] > num_mayor){
			num_mayor= tam;
		}
		cout << "EL numero mayor es: " << num_mayor << endl;
		
	}
	
	/*
	Declaración del arreglo con las frecuencias
	Se debe hacer en este momento, porque antes no se tenía el tamaño del mismo.
	El índice de este arreglo representará al número, y el valor la frecuencia.
	Por esto se declara con el número: num_mayor+1
	*/
	int frecuencias[num_mayor+1];
	
	//Inicialización del arreglo de frecuencias en ceros
	for(int j=0; j <= num_mayor; j++)
		frecuencias[j] = 0;
	
	//Calcular las frecuencias para todos los números
	for(int k=0; k < tam; k++)
		/*
		El índice utilizado es el valor ingresado por el usuario.
		El valor es el incremento, porque quiere decir que se ha encontrado
		una coincidencia.
		Esta instrucción es igual a: 
		frecuencias[a[k]]=frecuencias[a[k]]+1;
		*/
		frecuencias[a[k]]++;
	
	//Revisar cuál es la frecuencia más alta
	for(int m=0; m <= num_mayor; m++)
		 //si la frecuencia es mayor a la frec_alta entonces frec_alta = m
		 
	
	cout<<"El numero con la frecuencia mas alta fue: "<<frec_alta<<" con una frecuencia de: "<< frecuencias[frec_alta]<< endl;
	
	cin.get();
	
	return 0;
}
