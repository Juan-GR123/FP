/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
//
/*
 
 Una compañía aérea establece el precio del billete como sigue: en primer lugar se
fija una tarifa base de 150 euros, la misma para todos los destinos. A continuación se
suman 10 céntimos por cada kilómetro de distancia al destino.

Cree un programa que lea el número de kilómetros al destino y calcule el precio final
del billete
*/
/***************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    // Inicialización de variables
   double tarifa_base =150.0;
   double kilometros = 0.10;
   double distancia;
   double tarifa_final;
//   double result = 150.0/60.0;

   cout << endl;
   cout << "Indique la distancia necesaria para llegar a su destino (KM): ";
   cin >> distancia;
   
   
    // Cálculos
   kilometros = distancia * kilometros;
   tarifa_final = tarifa_base + kilometros;
   

    // Salida de datos
   cout << endl;
   cout << "El precio del billete para su viajes es de " << tarifa_final << " euros";
   cout << endl;
//   cout << result;

    return 0;
}
