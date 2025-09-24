/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
//
/*
10.Un banco presenta la siguiente oferta. Si se deposita una cantidad de euros capital
durante un a�o a plazo fijo, se dar� un inter�s dado por la variable interes. Realizad
un programa que lea una cantidad capital y un inter�s interes desde teclado y
calcule en una variable total el dinero que se tendr� al cabo de un a�o, aplicando la
f�rmula:


Es importante destacar que el compilador primero evaluar� la expresi�n de la parte
derecha de la anterior asignaci�n (usando el valor que tuviese la variable capital) y
a continuaci�n ejecutar� la asignaci�n, escribiendo el valor resultante de la expresi�n
dentro de la variable total).

A continuaci�n, el programa debe imprimir en pantalla el valor de la variable total.
Tanto el capital como el inter�s ser�n valores reales. 

Supondremos que el usuario introduce el inter�s como un valor real entre 0 y 100, es decir, un inter�s del 5,4 %
se introducir� como 5.4. Tambi�n supondremos que lo introduce correctamente, es
decir, que s�lo introducir� valores entre 0 y 100.

Supongamos que queremos modificar la variable original capital con el nuevo valor
de total. �Es posible hacerlo directamente en la expresi�n de arriba?
*/
/***************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    // Inicializaci�n de variables
   double total;
   double capital;
   double interes;
   
   cout << endl;
   cout << "Indique el capital que desea introducir durante un a�o: ";
   cin >> capital;
   cout << endl;
   cout << "Ahora indique el interes que querras recibir. Ten en cuenta que debe de ser un valor entre 0 y 100: ";
   cin >> interes;
   
    // C�lculos
   if(interes>=0 && interes<=100){
      total = (capital + capital) * (interes/100);
      cout << endl;
      cout << "El total al cabo de un a�o sera de " << total << " euros";
   }else{
      cout << endl;
      cout << "El interes introducido no cumple los valores requeridos";
   }

    // Salida de datos
   

    return 0;
}
