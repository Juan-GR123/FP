/****************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
/*

//Buscar hacer con atoi
*/
/****************************************************************/

#include <iostream>
#include <fstream>
#include <cctype>
#include <stdio.h>     
#include <stdlib.h>
#include <string>

using namespace std;

int to_int(char c){
   switch(c){
      case '0': return 0;
      case '1': return 1;
      case '2': return 2;
      case '3': return 3;
      case '4': return 4;
      case '5': return 5;
      case '6': return 6;
      case '7': return 7;
      case '8': return 8;
      case '9': return 9;
   }
   return 0;
}

int main(){
  
   int entero;
   string caracter;
   
   cout << "Introduzca un caracter: " << endl;
   cin >> caracter;
   
   entero = atoi(caracter.c_str());

   cout << "El caracter que has introducido es el numero: " << entero;

	return 0;
}
