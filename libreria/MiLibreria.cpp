#include "example.h"
#include <iostream>

int multiplicacion(int a, int b);
int menor(int a, int b);

using namespace std;

int multiplicacion(int a, int b)
{
	int resultado, numero1, numero2;
	resultado = numero1 = numero2 = 0;

	cout << "ingrese dos numeros por teclado:";
	cin >> numero1 >> numero2;

	//calculo y retorno
	resultado = numero1 * numero2; //errores al retornar variable resultado, por eso procedimiento alterno
	return numero1 * numero2;
	//REFIERO a mientras se ingrese un dato DISTINTO de un NUMERO, [como?]
}

int menor(int a, int b)
{
	if (a < b)
		return a;
	else
		return b;
}