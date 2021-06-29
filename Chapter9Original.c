#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char prueba[400]; //esta variable va a ser leida 
    char p[200]; //esta sera almacenada para posteriormente ser descompuesta en digitos
    printf("ingresa un testo:\n");
    fgets(prueba,sizeof(prueba),stdin);
    //sscanf(prueba,"%[^\n]s",p );
    sscanf(prueba,"%[^\n]s",p); //guardo todo un string usando %[^\n]s en la variable char p
    printf("Bienvenido, checa algunos datos interesantes de tu testo ingresado \n");
    salto(p); //salto de int main void, a otro bloque, la cual, lo que tengo registrado en el array "p" se va a cambiar al otro bloque y en lugar de llamarse p, se llamara salto
}
    int salto(char *xd) //ahora, sacamos los datos que nos transporto el bloque anterior (salto) a una variable que nos va a separar caracter por caracter el array 
                        //(por eso el asterisco), seguido del nombre de la nueva variable
    {
    char vamosaextraeruncaracterdetunombre; //para guardar cada uno de estos datos, necesito una variable que los almacene temporalmente
    char prev =' ';//para hacer un filtro, debo dejar el registro del caracter anterior, es como si incializaramos en 0 pero en formato de letras
    int m=0,n=0; //defino las variables que van a sumar esta onda
    printf("en letras, tu 'testo' se divide como: \n");
    while (*xd!='\0') //mientras esta extraccion de datos que se esta haciendo no llegue al final
    {
    vamosaextraeruncaracterdetunombre=*xd; //guardo el caracter extraido
      printf("%c\n",vamosaextraeruncaracterdetunombre);
      if(vamosaextraeruncaracterdetunombre!=' '){ //cuando este detecte espacios en blanco, no los contara
        m=m+1; //conteo de letras
      }
      if(vamosaextraeruncaracterdetunombre==' '&&prev!=' '){ //si la variabble acual es un blanco, y la anterior fue un caracter, se contara el espacio, esto con la finalidad 
       //de no contar mas espacios de los que no son
      n=n+1;
      }
      prev=vamosaextraeruncaracterdetunombre; //antes de iniciar un nuevo ciclo, debemos guardar la variable actual en la variable antigua, para poder seguir haciendo el filtro
      xd++;
      
    }
    if (vamosaextraeruncaracterdetunombre==' '){
    printf("tu testo tiene %d letras y %d espacios, dando lugar a %d palabras\n",m,n,n); //imprime resultados si este acabo en un espacio
    }
    else {
    printf("tu testo tiene %d letras y %d espacios, dando lugar a %d palabras\n",m,n,n+1); //imprime resultados si este no acabo en un espacio
    }
    return 0;
    }
