/********************************************************
 * Ex02 -- comparacion de lineas. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: Usando una funcion, comparar lineas. *
 * *
 * Usage: *
 * Mete dos lineas para ver si son iguales*
 ********************************************************/
#include <stdio.h>
#include <string.h>

int inicio(char *R1, char *R2); //se definen las variables en donde voy a guardar los datos 

int main()
{
	char t1[1000];
	char t2[1000]; //guardo los datos recibidos en estas variables
	printf("dame primera linea:\n");
	fgets(t1, sizeof(t1), stdin);
	t1[strlen(t1)-1] = '\0'; //se elimina el regreso de la linea y el salto de ella en el ultimo valor
	printf("dame segunda:\n");
	fgets(t2, sizeof(t2), stdin);
  t2[strlen(t2)-1] = '\0';
	if (inicio(t1, t2) != 0) //si estas presentn una relacion se expresa
		printf("Existe relacion\n");
	else
		printf("No hay relacion\n");//no hay rfelacion, se niega
	return 0;
}
int inicio(char *R1, char *R2) //las variables guardadas salen hay 
{
	int i;
	for (i= 0; i < strlen(R2); ++i) //este ciclo se va a hacer en la comparacion de lineas hasta la mayor{
		if (R1[i] != R2[i]) //si la linea 1 y 2 son diferentes, se va al if
			return 0;
	}
	return 1; //si no, se regresa y marca que no hay relacion
}

