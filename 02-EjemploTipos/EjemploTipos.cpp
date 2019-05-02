/*  
Trabajo practico "EjemploTipos"
Ivan enrique villacorta 
30/04/2019
*/


#include <iostream>
#include <assert.h>


int main(){

int a{5};
double b{6.5};
bool c{true};
char d[6];
unsigned e;


d = "TAREA";

assert(a+a==10);   //suma de enteros
assert(b+b==13);    //Suma de reales
assert(c==true);    //Comparacion booleana
assert(d=="TAREA");  //Lectura de una cadena de caracteres
assert(e!=a);       //Comparacion de un valor aleatorio con una constante

}