/********************************************************
 * Ex05 -- El mayor. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: Usando una funcion, saber cuantas letras tengo. *
 * *
 * Usage: *
 * Mete el texto que necesites*
 ********************************************************/
#include <stdio.h>
#include <string.h>
int main(void) {
  char frase[1000];
  char frase2[2000];
  printf("dame palabra\n");
  fgets(frase, sizeof(frase), stdin);
  sscanf(frase,"%[^\n]s",frase2);
  int palabras = 0; //entero donde vamos a guardar el no. de palabras
  printf("frase: %s\n", frase2); //se imprime el array con %s
palabras = cantidadPalabras(frase2);//esta funcion recive un array(frase) y devolvera un valor entero
printf("\n");
printf("la cantidad de palabras es: %d\n",palabras);
  }


  int cantidadPalabras(char *fra)//inicializo en la parte principal
   {
     int num = 0;
char cActual;
char cPrevio = ' ';
while (*fra != '\0') //mientras que esto sea diferente del ultimo carater
{
  cActual=*fra;  //puntero a la primera posicion, el asterisco extrae el caracter individual
 // printf("Caracter: %c\n",cActual);
 if (cActual == ' ' && cPrevio !=' '){
    num=num+1;
  }
  cPrevio = cActual;
  fra++; //se recupera cada caracter y regresa 
}
if (cActual != ' '){
  num=num+1; //si al final no hay espacio, se agrega una palabra mas
}
return num; //regreso lo que tengo en num
  }
