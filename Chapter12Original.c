/********************************************************
 * ExOriginal -- Datos. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: saber hacer uso de las funciones para sacar variables. *
 * *
 * Usage: *
 * mete un nombre valido y te mostrara datos  *
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
  char ga[100]; //defino las variables de los datos que voy a proporcionar
};
struct data name[] = { //genero la lista de datos
	{
		"Estudiante de la UPY",   
		"Isra",    //codigo del nombre a ingresar para que se haga valido
		"Tlaxcala",  
    "Tlaxcala de Xicohtencatl",
    "Caucel, Yucatan",
    "CETIS112",
    "Minecraft",
	},
	{
		"Estudiante de la UPY",   
		"Rafa",    //codigo del no9mbre a ingresar
		"Yucatan",
    "Francisco de Montejo",
    "Francisco de Montejo, Yucatan",
    "Prepa 2 UADY",
    "Call Of Duty saga",

	},
	{
		"Estudiante de la UPY",   
		"Angel",    //codigo del no9mbre a ingresar
		"Tabasco",    
    "Villahermosa",
    "Uman, Yucatan",
    "UVM Bicultural",
    "Saga de Halo",
	},
  {
    "Estudiante de la UPY",
    "Oscar",
    "Yucatan",
    "Caucel",
    "Caucel, Yucatan",
    "Prepa 10 Estatal",
    "Gears of war 3",
  },
    {
    "Estudiante de la UPY",
    "Cris",
    "Yucatan",
    "Caucel",
    "Caucel, Yucatan",
    "TecMilenio",
    "Minecraft",
  },
    {
    "Estudiante de la UPY",
    "Erubiel",
    "Yucatan",
    "Uman",
    "Uman, Yucatan",
    "COBAY Uman",
    "N/A",
  },
    {
    "Estudiante de la UPY",
    "Lugo",
    "Yucatan",
    "Aleman",
    "Aleman, Yucatan",
    "Prepa Abierta",
    "Diablo 2", //practicamente tengo toda la info de los compañeros entrevistados con los datos respectivos, cada dato se guarda en un char distinto
  },
};
void transporte(char *arr);

int main()
{
	char line[1000]; //registro el nombre clave de la persona
	char llave[400]; //variable de guardado

	printf("Dame el nombre de la persona: ");
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

		printf("%s:\n",exa);
		printf("Escuela Actual: %s\n", name[i].Escuela);
		printf("Estado de nacimiento: %s\n", name[i].Estadonac);
    printf("Municipio de nacimiento: %s\n", name[i].mc);
    printf("Municipio y estado actual: %s\n", name[i].em);
    printf("Prepa de procedencia: %s\n", name[i].pre);    
    printf("Videojuego fav: %s\n", name[i].ga);    //imorime los datos de arriba, si no, no imprimira informacion de nada
	}
}
