/****************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
//
//
/*
	Programa para calcular el salario
*/
/****************************************************************/

#include <iostream> // Inclusi�n de los recursos de E/S
using namespace std;

int main() // Programa Principal
{
	// Declaración de variables
	int salario_base;
	int salario_final;
	int incremento;

	// Cálculos
	salario_base = 1000;
	salario_final = salario_base;
	incremento = 200;
	salario_final = salario_final + incremento;
	salario_base = 3500;

	// Salida (presentación de resultados)
	cout << endl;
	cout << "Salario base: " << salario_base << endl;
	cout << "Salario final: " << salario_final << endl;

	return 0;

	//Salario base: 3500
	//Salario final: 1200

	// 	Responda razonadamente a la siguiente pregunta: ¿El hecho de realizar la asignación salario_final = salario_base; hace que ambas variables estén ligadas
	// durante todo el programa y que cualquier modificación posterior de salario_base
	// afecte a salario_final?

	// No, porque la asignacion que se le hace a salario_final del valor de salario_base es una copia del valor que tiene en ese momento,
	// por lo que cualquier cambio posterior en salario_base no afecta a salario_final.


}
