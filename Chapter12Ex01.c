/********************************************************
 * Ex01 -- lista de datos con Email . *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: Hacer uso de listas para organizar datos. *
 * *
 * Usage: *
 * ingresa dentro del programa la informacion que quieras mostrar cuando se ejecute. *
 ********************************************************/
#include <stdio.h>

int main()
{
	int tamaño; //se define cuantas veces se hara el for (variable)
	int personas; //contador

	struct lista {
		char namexd[30];
		char ultimoname[30];
		char G[10];
		char DameEmail[40];
    char equipo[40];
    char Hab[40];
    char EC[40]; //aqui se estructura la lista de los datos a contener en tipo char
	};

	struct lista listareceptor[] = {
		{
			"Israel",
			"Prado",
			"Hombre",
			"2009107@upy.edu.mx",
      "Aficionado del cruz azul",
      "Manejo de compuertas logicas",
      "Es dificil",

		},
		{
			"Rafael",
			"Mari",
			"Hombre",
			"2009083@upy.edu.mx",
      "Aficionado del Borrusia Dormunt",
      "Experto en conics",
      "Casado xd",
		},
    {
			"Cesia",
			"Tzuc",
			"Mujer",
			"2009138@upy.edu.mx",
      "Ningno, le tiene medio al exito xd",
      "Experta en Electronica",
      "Without comments :/", //rellenamos todos los datos de nuestra lista conforme lo que necesitemos y el numero de variables que tengamos
		},
	};

	tamaño = sizeof(listareceptor) / sizeof //se define el nuemero de personas que hay en el momento, definido por struct lista
  (listareceptor[0]);

	for (personas = 0; personas < tamaño; ++personas) {
		printf("** Persona %d **\n", (personas + 1));
		printf("Nombre: %s\n", listareceptor[personas].namexd);
		printf("Apeido: %s\n", listareceptor[personas].ultimoname);
		printf("Hombre o Mujer: %s\n", listareceptor[personas].G);
		printf("Email: %s\n", listareceptor[personas].DameEmail);
    printf("equipo favorito: %s\n",listareceptor[personas].equipo);
    printf("Habilidad central: %s\n",listareceptor[personas].Hab);    
    printf("Estado Civil: %s\n",listareceptor[personas].EC);    
//a partir de todos los datos registrados, mandamos la inidicacion que se imprima dato por dato lo que tenemos, haciendo un bucle donde todos los datos solicitados sean rellenados de forma automatica, hasta que se acaben las personas 
		printf("\n");
	}

	return 0;
}
