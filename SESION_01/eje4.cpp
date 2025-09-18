/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
//
/*
  Programa que pide mostrar en pantalla el resultado de las siguientes expresiones numericas
  que constituyen una aproximación al valor de π:
  1) 256/81
  2) 3 + (1/8)
  3) 377/120
*/
/***************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    // Inicialización de variables
    double problema1;
    double problema2;
    double problema3;

    // Cálculos

    problema1 = 256.0 / 81.0;
    problema2 = 3.0 + (1.0 / 8.0);
    problema3 = 377.0 / 120.0;

    // Salida de datos
    cout << endl;
    cout << "El resultado de la primera expresion es:" << problema1 << endl;
    cout << "El resultado de la primera expresion es:" << problema2 << endl;
    cout << "El resultado de la primera expresion es:" << problema3 << endl;
    cout << endl;

    return 0;
}