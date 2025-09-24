/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
//
/*
 9. Un radar de tramo est� organizado en tres sectores: 1) el primero, de 5.3 Km, tiene la
velocidad limitada a 80 Km/h, 2) el segundo, de 8.1 Km, tiene la velocidad limitada a
100 Km/h, y 3) el tercero, de 6.4 Km, tiene la velocidad limitada a 80 Km/h. El tramo
tiene dos p�rticos de control, al inicio y al final.

Escribir un programa que calcule y muestre el tiempo umbral de sanci�n, o sea, el
tiempo m�nimo que puede emplear un veh�culo en recorrer el tramo completo sin ser
sancionado. Muestre el resultado en segundos y en minutos y segundos.

tiempo = distancia / valocidad;

*/
/***************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    // Inicializaci�n de variables
   double tiempo1;
   double tiempo2;
   double tiempo3;
   double total;
    // C�lculos

   tiempo1= (5.3/80) * 60;
   tiempo2 = (8.1 / 100) * 60;
   tiempo3 = (6.4/ 80) * 60;
   total = tiempo1 + tiempo2 + tiempo3;



    // Salida de datos
    cout << endl;
    cout << "El tiempo que se tarda en recorrer el sector 1 ser� de: " << tiempo1 << " minutos" << endl;
    cout << "El tiempo que se tarda en recorrer el sector 2 ser� de: " << tiempo2 << " minutos" << endl;
    cout << "El tiempo que se tarda en recorrer el sector 3 ser� de: " << tiempo3 << " minutos" << endl;
    cout << "El tiempo que se tarda en recorrer todos los sectores ser� de: " << total << " minutos" << endl;

    return 0;
}
