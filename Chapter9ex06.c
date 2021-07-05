/********************************************************
 * Ex06 -- Datos personales. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: hacer una funcion para que se trnsforme - por _. *
 * *
 * Usage: *
 * mete un texto y te cambiara el caracter de - a _  *
 ********************************************************/
#include <stdio.h>
#include <string.h>
char p[200]; 
int main(void) //declaro mis variables a utilizzar de forma global
{
    char prueba[400]; 
    printf("ingresa un testo:\n");
    fgets(prueba,sizeof(prueba),stdin);
    sscanf(prueba,"%[^\n]s",p);  //Se piden, se leen y se registran los datos solicitados por parte del usuario
    salto(p); //nos llevamos este registro a otro bloque de funcion
}
    int salto(char *xd) //extraempos caracter por caracter nuestro bloque de funcion
    {
    char vamosaextraeruncaracterdetunombre;  
    char prev =' ';
    int m=0,n=0; 
    printf("tu metiste lo siguiente:\n%s \n",p); 
    printf("remplazando guiones comunes por guiones bajos seria: \n"); //se escribira el texto correctamente haciendo el remplazo mencinado
    while (*xd!='\0') 
    {
    vamosaextraeruncaracterdetunombre=*xd; //se escanea caracter por caracter lo que se tenga 
      if(vamosaextraeruncaracterdetunombre=='-'){ //si este es igual  -, se cambiara a _
        printf("_"); 
      }
      else {printf("%c",vamosaextraeruncaracterdetunombre);} //si no, se respeta el caracter introducido
      xd++;
      
    }
    return 0;
    
    }
