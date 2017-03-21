/*
Este programa suma dos numeros
*/

#include <iostream>

using namespace std;

int main()
{
    int a;     //Declaracion de entero
    int b = 0; //Declaracion e inicializacion en la misma linea
    int c = 0;
    a = 0; //inicializacion

    cout << "Este programa suma dos numeros" << endl
	 << endl;

    cout << "Primer numero? "; //Solicita el primer numero
    cin >> a;		       //Captura el primer numero por teclado

    cout << "Segundo numero? "; //Solicita el segundo numero
    cin >> b;			//Captura el segundo numero por teclado

    c = a + b; //Realiza la operacion y la almacena en una variable

    //Imprime la operacion.
    cout << a;
    cout << " + ";
    cout << b;
    cout << " = ";
    cout << c;
    cout << endl;
    //Las impresiones en pantalla se pueden hacer tambien en una sola linea
    cout << a << " + " << b << " = " << c << endl;

    cin.get();

    return 0;
}
