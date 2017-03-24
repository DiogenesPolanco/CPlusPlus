#include <iostream>
#include <iomanip> //se usa para agregar espacios en la salida

using namespace std;

int main()
{

    //Declaración del arreglo de 10 elementos de tipo int
    int a[10]={5,10,15,20,25,30,35,40,45,};
    int n, result;
    

    //Inicialización del arreglo, aqui tienes que hacer todo el trabajo
    
    for (n=0;n<10; n++){
        result = a[n];
    }


    
    //Se debe tomar cada una de las posiciones y asignarles un valor    
 	//Valor inicial para la posición i-ésima del arreglo    
    //Mostrar el valor de la información almacenada en el arreglo
    cout << "Resultado= " << result << endl;

    return 0;
}