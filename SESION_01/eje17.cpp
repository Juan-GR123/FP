/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
//
/*
17. Queremos construir un programa que simule un juego inspirado en el de los triles (del
que procede el nombre de trilero). Suponemos que hay dos participantes y cada uno
tiene una caja etiquetada con su nombre. Dentro de cada caja hay una cantidad de
dinero y el objetivo es intercambiar las cantidades que hay dentro. Por ahora, sólo se
pide construir un programa que haga lo siguiente:

Debe leer desde teclado dos variables caja_izda y caja_dcha.
A continuación debe intercambiar sus valores y finalmente, mostrarlos.

Observe que se desea intercambiar el contenido de las variables, de forma que
caja_izda pasa a contener lo que tenía caja_dcha y viceversa. El siguiente código no es válido ya que simplemente engaña al usuario pero las cajas no se quedan
modificadas:
cout << "La caja izquierda vale " << caja_dcha << "\n";
cout << "La caja derecha vale " << caja_izda;

Estaríamos tentados a escribir el siguiente código:
caja_izda = caja_dcha;
caja_dcha = caja_izda;
pero no funciona correctamente ¿Por qué?
Proponga una solución e impleméntela.

*/
/***************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    // Inicializaci�n de variables
    double caja_izda;
    double caja_dcha;
    double soporte;

    cout << "introduzca el valor de la caja izquierda: \n";
    cin >> caja_izda;
    cout << "Ahora introduzca el valor de la caja derecha: \n";
    cin >> caja_dcha;

    // Calculos
    soporte = caja_dcha;
    caja_dcha = caja_izda;
    caja_izda = soporte;

    // Salida de datos
    cout << "Intercabiando valores ....\n";
    cout << "...Intercambio Completado!\n";
    cout << "El valor de la caja izquierda es: " << caja_izda << "\n";
    cout << "El valor de la caja derecha es: " << caja_dcha << "\n";

    return 0;
}
