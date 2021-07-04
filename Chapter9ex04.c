/********************************************************
 * Ex02 -- conversiones. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: Dentro de una funcion, realizar conversiones de hexadecimal a decimal. *
 * *
 * Usage: *
 * pon un dato y observaras la conversion a hexadecimal. *
 ********************************************************/
#include <stdio.h>
#include <string.h>

int stringtotal(char *PED); 
void hex(int ING);
char frase[1000];
char registro [2000]; //declaro variables que van a escribir
int main()
{
  printf("dame combinacion\n");
  fgets(frase, sizeof(frase), stdin);
  sscanf(frase,"%[^\n]s",registro); //pido y registro la linea solicitada
	//char string[] = frase2;

	hex(stringtotal(registro)); // sen realiza el registro y salimos de la primera paerte para salir a una funcion

	return 0;
}

int stringtotal(char *CHECK) //todos los datos registrados previamente nos los llevamos a una funcion
{
	int I;
	int total = 0;

	for (I = 0; I < strlen(CHECK); ++I) { //hasta que se llegue a la ultima parde de nustro registro durara estos ciclos
		total += registro[I]; //se genera un caracter y nos saltamos a otra funcion
	}

	return total;
}

void hex(int result) 
{
	printf("%#x\n", result); //una vez extraido todo esto y sumado, se convierte de foma sencilla a hexadecimal
}
