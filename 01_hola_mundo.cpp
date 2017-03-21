//Biblioteca de entrada/salida para imprimir en pantalla
#include <iostream>

using namespace std; //Espacio de nombres de plantilla estandar

//Esto es un comentario de una linea, empieza por dos slash

/*
Un comentario de multiples lineas abre con un slash y un asterisco, 
y cierra con un asterisco y un slash. Los comentarios no son 
tomados en cuenta al momento de compilar.
*/

/*
main es la funcion principal. De alli es que arrancan los programas.
int indica que esta funcion devuelve un numero entero.
Los parentesis indican que esta funcion principal no recibe 
argumentos.

Las llaves {} indican el cuerpo de la funcion. La llave 
izquierda { indica que abre la funcion y la llave derecha } indica 
que cierra.
*/

int main()
{
    /*
	La linea a continuacion imprime en pantalla la cadena que se 
	encuentra dentro de las comillas dobles, utilizando el comando 
	cout (c out, salida de c) y el operador <<. Las lineas van con un 
	caracter de terminacion que es el punto y coma (;).
	*/
    cout << "Hola Mundo!";

    /*
		El siguiente comando hace que el programa quede a la espera para que
	el usuario oprima una tecla y terminar con la ejecucion del mismo.
	Si no se coloca es posible que se abra e inmediatamente se cierre una ventana
	de consola y nunca muestre la ejecucion del programa.
	Aunque en algunas implementaciones esto no es necesario,  es importante
	colocarlo para que no haya problemas. 
	Si en su IDE esto aun no hace que la ventana del programa quede a la espera,
	reemplace la linea por (debe probarlo):
	getchar();
	*/
    cin.get();

    //Devuelve un numero indicando que el programa termina correctamente.
    return 0;
}
