/********************************************************
 * Ex04 -- Aereopuerto. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: Hacer uso de listas para mostrar informacion . *
 * *
 * Usage: *
 * Ingresa el Codigo del aereopuerto  *
 ********************************************************/
#include <stdio.h>
#include <string.h>

struct data {
	char Escuela[100];
	char reg[100];   
	char Estadonac[100];
  char mc[100];
  char em[100];
  char pre[100];
  //defino las variables de los datos que voy a proporcionar
};
struct data name[] = { //genero la lista de datos
	{
		"A-14526",   
		"Merida1",    //codigo del nombre a ingresar para que se haga valido
		"Merida Yucatan",  
    "CDMX",
    "07/07/2021 a las 4:00 pm",
    "07/07/2021 a las 6:00 pm",
  
	},
	{
		"A-87868",   
		"CDMX",    //codigo del no9mbre a ingresar
		"CDMX",
    "Merida Yucatan",
    "07/07/2021 a las 8:00 pm",
    "07/07/2021 a las 10:00 pm",
   

	},
	{
		"A-49863",   
		"Merida2",    //codigo del no9mbre a ingresar
		"Merida Yucatan",    
    "Puebla de Zaragoza",
    "07/07/2021 a las 4:30 pm",
    "07/07/2021 a las 6:00 pm",

	},
  {
    "A-48986",
    "Puebla",
    "Puebla de Zaragoza",
    "Merida Yucatan",
    "07/07/2021 a las 6:30 pm",
    "07/07/2021 a las 8:00 pm",
 //se registran los datos de los respectivos vuelos
  },
};
void transporte(char *arr);

int main()
{
	char line[1000]; //registro el nombre clave de la persona
	char llave[400]; //variable de guardado

	printf("Dame el codigo del aereopuerto: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%s", llave); //guardo toda la linea

	transporte(llave); //transporto esta data a otro bloque de programacion

	return 0;
}

void transporte(char *exa) //lo extraigo aqui
{
  printf("\n");
	int i; 
	for (i = 0; i <= 8; ++i) { //teniendo en cuenta que es la cantidad de datos que tengo
		if (strcmp(name[i].reg, exa) != 0) //si el nombre registrado es verdadero
			continue;

		printf("Informacion\n");
		printf("Numero de vuelo: %s\n", name[i].Escuela);
		printf("Origen: %s\n", name[i].Estadonac);
    printf("Destino: %s\n", name[i].mc);
    printf("Hora de salida: %s\n", name[i].em);
    printf("Hora de llegada al destino: %s\n", name[i].pre);    
   //imorime los datos de arriba, si no, no imprimira informacion de nada
	}
}
