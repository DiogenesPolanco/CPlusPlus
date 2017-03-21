#include <iostream>

using namespace std;

int main()
{

    int opcion = 0; //guarda la opción digitada por el usuario.

    do
    { //Empieza el ciclo do-while
	/*
		Se ejecuta todo lo que se encuentra en este bloque una vez.
		Luego verifica la condición, y si esta es verdadera, vuelve y ejecuta
		el bloque de código dentro del do-while.
		Si en algún momento la condición es falsa, la ejecución continúa por
		fuera del ciclo do-while.
		*/
	cout << "MENÚ DEL DÍA" << endl
	     << endl;
	cout << "Seleccione el número de la opción que desea:";
	cout << endl
	     << endl;
	cout << "1. ARROZ A LA GIRASOL" << endl;
	cout << "Un delicioso plato de arroz con un huevo frito encima.";
	cout << endl
	     << endl;
	cout << "2. ATÚN CON PASTA" << endl;
	cout << "El tradicional plato de soltero, con tallarines.";
	cout << endl
	     << endl;
	cout << "3. CALENTADO" << endl;
	cout << "El almuerzo de ayer, hoy.";
	cout << endl
	     << endl;
	cout << "Opcion?: ";

	cin >> opcion;
	/*
		La condición evalúa que el usuario introduzca un número que se encuentre
		dentro del rango mostrado en el menú. Si el usuario introduce un número
		distinto, se itera nuevamente por el ciclo.
		*/
    } while (opcion < 1 || opcion > 3); //Termina el ciclo do-while

    cout << "La opcion seleccionada es la No. " << opcion;

    cin.get();
    return 0;
}