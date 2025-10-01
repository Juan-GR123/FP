/****************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
/*
Calcular el número de segundos que hay entre dos instantes del mismo día. Cada
instante se caracteriza por la hora (entre 0 y 23), minuto (entre 0 y 59) y segundo
(entre 0 y 59).
El programa leerá la hora, minuto y segundo del instante inicial, y la hora, minuto y
segundo del instante final (supondremos que los valores introducidos son correctos) y
mostrará el número de segundos entre ambos instantes.

*/
/****************************************************************/

#include <iostream>
using namespace std;


int main(){
   int hora1;
   int minuto1;
   int segundo1;
   int hora2;
   int minuto2;
   int segundo2;
   int hora_total1;
   int hora_total2;
   int conclusion;
   double conclusiond;
   
   cout << "introduzca la hora inicial: \n";
    cin >> hora1;
   cout << "Ahora introduzca los minutos: \n";
    cin >> minuto1;
   cout << "Por último introduzca los segundos: \n";
    cin >> segundo1;
    
    
   cout << "introduzca la hora final: \n";
    cin >> hora2;
   cout << "Ahora introduzca los minutos: \n";
    cin >> minuto2;
   cout << "Por último introduzca los segundos: \n";
    cin >> segundo2;
    
    if(hora1 > 23 || hora1 <0 || hora2 > 23 || hora2 <0 ){
       cout << "Los valores de hora no son correctos vuelvalo a intentar \n";
       return 0;
    }else if(minuto1 > 60 || minuto1<0 || minuto2 > 60 || minuto2<0){
       cout << "Los valores de minutos no son correctos vuelvalo a intentar \n";
       return 0;
    }else if(segundo1 > 60 || segundo1<0 || segundo2 > 60 || segundo2<0){
       cout << "Los valoresde segundos no son correctos vuelvalo a intentar \n";
       return 0;
    }
    
    
    
    //Calculos
    hora1= hora1 * 3600;
    hora2 = hora2 * 3600;
    minuto1= minuto1*60;
    minuto2= minuto2*60;
    
    hora_total1= hora1 + minuto1 + segundo1;
    
    hora_total2 = hora2 + minuto2 + segundo2;
    
    conclusion= hora_total2 - hora_total1;
    
    
    
    cout << "El tiempo entre el tiempo inicial y el tiempo final es de: " << conclusion << " segundos \n";
    
    
	return 0;
}
