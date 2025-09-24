/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
//
/*
 
 Una compa��a a�rea establece el precio del billete como sigue: en primer lugar se
fija una tarifa base de 150 euros, la misma para todos los destinos. A continuaci�n se
suman 10 c�ntimos por cada kil�metro de distancia al destino.

Cree un programa que lea el n�mero de kil�metros al destino y calcule el precio final
del billete
*/
/***************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    // Inicializaci�n de variables
   double tarifa_base =150.0;
   double kilometros = 0.10;
   double distancia;
   double tarifa_final;
//   double result = 150.0/60.0;

   cout << endl;
   cout << "Indique la distancia necesaria para llegar a su destino (KM): ";
   cin >> distancia;
   
   
    // C�lculos
   kilometros = distancia * kilometros;
   tarifa_final = tarifa_base + kilometros;
   

    // Salida de datos
   cout << endl;
   cout << "El precio del billete para su viajes es de " << tarifa_final << " euros";
   cout << endl;
//   cout << result;

    return 0;
}
