/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
//
/*
 14. Escriba un programa que lea un distancia en millas (como un real) y muestre la cantidad equivalente en kil�metros. A continuaci�n leer� una distancia en kil�metros (como
un real) y mostrar� la cantidad equivalente en millas.

Debe tener en cuenta que 1 milla equivale a 1.609 kil�metros.

Finalidad: Asignar a una variable el resultado de una expresi�n.

*/
/***************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    // Inicializaci�n de variables
      double millas;
      double kilometros;
   
      cout << "Dime cuantas millas quieres que pase a kilometros: " << endl;
      cin >> millas;
  
      kilometros = millas * 1609;
      
      cout << endl;
      cout << millas << " millas en kilometros son " << kilometros << "km" << endl;
      
      cout << "Ahora dime cuantos kilometros quieres que pase a millas: " << endl;
      cin >> kilometros;
      
      millas = kilometros / 1609;
      
      cout << endl;
      cout << kilometros << "km en millas son " << millas << " millas" << endl;
    

    return 0;
}
