/*  
Trabajo practico "EjemploTipos"
Ivan enrique villacorta 
30/04/2019
*/


#include <iostream>
#include <assert.h>
#include <string>


int main(){

int a{5};
double b{6.5};
bool c{true};
char d[6];
unsigned e{42};
string cadena; 

cadena="Esto es un string";
d = 'TAREA';


assert(10== a + a );   	//Suma de enteros
assert(13== b + b);    	//Suma de reales
assert(c==true);    	//Comparacion booleana
assert(d=='TAREA');  	//Lectura de una cadena de caracteres
assert(84 == e + e );   //Suma de naturales
assert("Esto es un string" == cadena);   //Lectura de un string 
}