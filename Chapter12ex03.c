/********************************************************
 * Ex03 -- lista de Vuelos. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: Hacer uso de listas para organizar Vuelos de aviones. *
 * *
 * Usage: *
 * Ingresar los datos de estos para imprimirlos despues en pantalla. *
 ********************************************************/
#include <stdio.h>

int main()
{
	int tamaño; //se define cuantas veces se hara el for (variable)
	int personas; //contador
  int cont2=0;
  int tamaño2; //se realiza un contador y una variable para los vuelos internacionales
	struct lista {
		char namexd[30];
		char ultimoname[30];
		char G[100];
		char DameEmail[40];
    char equipo[40];
	};
  	struct Inter2 {
		char namexd[30];
		char ultimoname[30];
		char G[100];
		char DameEmail[40];
    char equipo[40]; //realizo las variables donde requiero registrar los datos solicitados
	};

	struct lista listareceptor[] = { //relizo la primera estructura de datos
		{
			"A-6841",
			"Merida Yucatan",
			"CDMX",
			"06/07/2021 a las 11:00 AM",
      "06/07/2021 a la 1:00 PM",
		},
		{
			"A-5764",
			"CDMX",
			"Merida Yucatan",
			"06/07/2021 a las 2:00 PM",
      "06/07/2021 a las 4:00 PM",
		},
    {
			"A-8785",
			"Merida Yucatan",
			"Puebla de Zaragoza",
			"06/07/2021 a las 10:00 AM",
      "06/07/2021 a las 12:30 PM",
		},
      {
			"A-8832",
			"Puebla de Zaragoza",
			"Merida Yucatan",
			"06/07/2021 a las 3:00 PM",
      "06/07/2021 a las 4:30 PM",
		},
	};
struct Inter2 listareceptor2[] = { //realizo la segunda de datos
  {
			"I-0325",
			"Merida Yucatan",
			"Paris, Francia",
			"06/07/2021 a las 12:00 AM",
      "06/07/2021 a las 5:00 PM",
		},
    {
			"I-0396",
			"Paris Francia",
			"Merida Yucatan",
			"06/07/2021 a las 8:00 PM",
      "07/07/2021 a las 1:00 AM", // se realiza el registro de lo que debe aparecer en la pantalla de informacion
		},
};
	tamaño = sizeof(listareceptor) / sizeof 
  (listareceptor[0]); //el tamaño lo definira la cantidad de pares de corchetes metidos en la info
  tamaño2 = sizeof(listareceptor2) / sizeof 
  (listareceptor2[0]);

	for (personas = 0; personas < tamaño; ++personas) {
		printf("** Vuelo Nacional %d **\n", (personas + 1));
		printf("Numero de vuelo: %s\n", listareceptor[personas].namexd);
		printf("Aereopuerto de origen: %s\n", listareceptor[personas].ultimoname);
		printf("Destino: %s\n", listareceptor[personas].G);
		printf("Inicio de vuelo: %s\n", listareceptor[personas].DameEmail);
    printf("Hora de Llegada %s\n",listareceptor[personas].equipo);
		printf("\n"); //se imprime la informacion en la pantalla, haciendolo de forma r3esumida en la programacion haciendo uso del for oy de la estructura de datos, primera parte
	}
for (cont2 = 0; cont2 < tamaño2; ++cont2) {
  printf("** Vuelo Internacional %d **\n", (cont2 + 1));
		printf("Numero de vuelo: %s\n", listareceptor2[cont2].namexd);
		printf("Aereopuerto de origen: %s\n", listareceptor2[cont2].ultimoname);
		printf("Destino: %s\n", listareceptor2[cont2].G);
		printf("Inicio de vuelo: %s\n", listareceptor2[cont2].DameEmail);
    printf("Hora de Llegada %s\n",listareceptor2[cont2].equipo);
		printf("\n");
    //se imprime la informacion en la pantalla, haciendolo de forma r3esumida en la programacion haciendo uso del for oy de la estructura de datos, segunda parte
}
	return 0;
}
