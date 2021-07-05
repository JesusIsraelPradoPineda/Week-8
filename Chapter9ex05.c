/********************************************************
 * Ex05 -- El mayor. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: Usando una funcion, saber cual es el numero mas grande. *
 * *
 * Usage: *
 * Mete en la programacion original los datos que deseas*
 * Restrictions* Solamente puede ser ejecutado, no podras registrar las variables que tu necesitas a menos que lo hagas en el archivo central
 ********************************************************/
#include <stdio.h>

int r(int *array, int xd); //las variables a usar y para pasar al siguiente bloque

int main()
{
	int NZ[8] = {2,14,6,3,9,4,7,19};  //cuantos numeros vamos a usar asi como los valores 
	
	printf("tu numero mas grande de tu arreglo es el %d\n", r(NZ, 8)); //se imprime el mayor dado n numeros

	return 0;
}

int r(int *array, int xd) //dado las variables de arriba, tambien entran estas mismas aqui
{
	int r = 0; //Inicializo al maximo con 0
	int i; 

	for (i = 0; i < xd; ++i) {
		if (array[i] > r) //si el valor siguiente es mayor al valor actual
			r = array[i]; //se guarda
	}

	return r; //regresamos la variable definida
}
