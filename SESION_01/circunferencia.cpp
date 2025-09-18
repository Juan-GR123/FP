/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
//
/*
  Programa que pide el radio de una circunferencia para calcular
  la longitud y el area de dicha circunferencia
*/
/***************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    double radio;
    double longitud;
    double area;

    double pi = 3.1415927;

    // Entrada de datos
    cout << "Introduzca el radio de la circunferencia: ";
    cin >> radio;

    // Cálculos
    longitud = 2 * pi * radio;

    area = pi * (radio * radio);

    // Salida
    cout << endl;
    cout << "El valor de la longitud de la circunferencia es: " << longitud << endl;
    cout << "El valor del area de la circunferencia es: " << area << endl;
    cout << endl;

    return 0;
}