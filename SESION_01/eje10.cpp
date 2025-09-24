/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
//
/*
10.Un banco presenta la siguiente oferta. Si se deposita una cantidad de euros capital
durante un año a plazo fijo, se dará un interés dado por la variable interes. Realizad
un programa que lea una cantidad capital y un interés interes desde teclado y
calcule en una variable total el dinero que se tendrá al cabo de un año, aplicando la
fórmula:


Es importante destacar que el compilador primero evaluará la expresión de la parte
derecha de la anterior asignación (usando el valor que tuviese la variable capital) y
a continuación ejecutará la asignación, escribiendo el valor resultante de la expresión
dentro de la variable total).

A continuación, el programa debe imprimir en pantalla el valor de la variable total.
Tanto el capital como el interés serán valores reales. 

Supondremos que el usuario introduce el interés como un valor real entre 0 y 100, es decir, un interés del 5,4 %
se introducirá como 5.4. También supondremos que lo introduce correctamente, es
decir, que sólo introducirá valores entre 0 y 100.

Supongamos que queremos modificar la variable original capital con el nuevo valor
de total. ¿Es posible hacerlo directamente en la expresión de arriba?
*/
/***************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    // Inicialización de variables
   double total;
   double capital;
   double interes;
   
   cout << endl;
   cout << "Indique el capital que desea introducir durante un año: ";
   cin >> capital;
   cout << endl;
   cout << "Ahora indique el interes que querras recibir. Ten en cuenta que debe de ser un valor entre 0 y 100: ";
   cin >> interes;
   
    // Cálculos
   if(interes>=0 && interes<=100){
      total = (capital + capital) * (interes/100);
      cout << endl;
      cout << "El total al cabo de un año sera de " << total << " euros";
   }else{
      cout << endl;
      cout << "El interes introducido no cumple los valores requeridos";
   }

    // Salida de datos
   

    return 0;
}
