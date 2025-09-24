/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
//
/*
18. Leed desde teclado tres variables correspondientes a un número de horas, minutos
y segundos, respectivamente. Diseñar un algoritmo que calcule las horas, minutos
y segundos dentro de su rango correspondiente. Por ejemplo, dadas 10 horas, 119
minutos y 280 segundos, debería dar como resultado 12 horas, 3 minutos y 40 segundos. En el caso de que nos salgan más de 24 horas, daremos también los días
correspondientes (pero ya no pasamos a ver los meses, años, etc)
Como consejo, utilizad los operadores / (representa la división entera cuando los dos
argumentos son enteros) y % (representa el resto de la división entera).

*/
/***************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int horas;
    int minutos;
    int segundos;
    int dias;

    cout << "introduzca las horas: \n";
    cin >> horas;
    cout << "Ahora introduzca los minutos: \n";
    cin >> minutos;
    cout << "Por ultimo introduzca los segundos: \n";
    cin >> segundos;

    // Calculos
    minutos += segundos / 60;
    segundos = segundos % 60;

    horas += minutos / 60;
    minutos = minutos % 60;

    dias = horas / 24;
    horas = horas % 24;

    cout << "El tiempo introducido equivale a: " << dias << " dias, " << horas << " horas, " << minutos << " minutos y " << segundos << " segundos.\n";

    return 0;
}
