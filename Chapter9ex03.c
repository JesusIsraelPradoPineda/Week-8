/********************************************************
 * Ex03 -- El mayor. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: Usando una funcion, saber cuantas veces aparece un numero en un array. *
 * *
 * Usage: *
 * mete los valores y el numero a conocer para poder visualizarlo*
 * Restrictions* Solamente puede ser ejecutado, no podras registrar las variables que tu necesitas a menos que lo hagas en el archivo central
 ********************************************************/
#include <stdio.h>

int i(int can, int *array, int md); //defino las variables usadas

int main()
{
	int array[100] = {10,5,8,7,9,6,3,4,1,7,8,9,2,5,4,7,8,5,4,1,2,3,5,4,7,8,9,6,3,4,7,8,9}; //meto los numeros en el array asi como el valor que quiero conocer cuantas veces se repite
	int can = 8;

	printf("Array contains %d times the number %d\n", i(can, array, 100), can); //expreso cuantoas veces aparece el numero seleccionado

	return 0;
}
int i(int can, int *array, int md) //los valores que tengo arriba, los traigo abajo
{
	if (md == 0) //si este valor vale 0, se regresa a la funcion inicial
		return 0;

	return (*array == can) + i(can, array+1, md-1); //se opera y se busca ccual es el numero que mas veces se repite
}
