#include <iostream>

using namespace std;

int main()
{
    int a = 0; //variable contadora

    //Inicia el ciclo for
    for (a = 0; a < 10; a++)
    {
	// for : palabra clave
	//a = 0 : asigna un valor inicial a la variable
	//a<10 : la condición que indica hasta cuándo se ejecuta el ciclo
	//a++ : el paso de la variable. a++ equivale a a=a+1

	cout << a << " ";
    } //fin ciclo for

    cout << endl;

    //Este otro ejemplo hace una declaración dentro del for.
    //Está permitido.
    for (int b = 0; b < 10; b = b + 1)
    {
	cout << b << " ";
    }

    cin.get();
    return 0;
}