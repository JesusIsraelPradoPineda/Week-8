  /********************************************************
 * ExOrigina2 -- lista de datos con Email . *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: Hacer uso de listas para mostrar lo que el usuario registro. *
 * *
 * Usage: *
 * Ingresa el numero de estudiantes a registrar y registra cada uno de sus datos. *
 ********************************************************/
#include<stdio.h> 
#include<string.h>
int reg,i;
struct data //se registra la variable y se genera su estructura correspondiente
{
    int NoControl;
    char en[100];
    float promedio;
}; //nombre de la estructura y datos que yo necesito saber

int main(void)
{
    char frase[100],re[50];
    struct data registro[reg]; //genero los registros de mi variables dado por esto
    printf("Cuantos estudiantes vamos a registrar? \n");
    fgets(re, sizeof(frase), stdin);
    sscanf(re,"%d",&reg);
    printf("Ingresa los datos de %d estudiantes \n",reg);
    //ingreso cuantos estudiantes quiero registrar en la plataforma
    for(i=1; i<=reg; i++)
    {
       
        printf("ingresa numero de control de estudiante %d: \n",i);
        fgets(frase, sizeof(frase), stdin);
        sscanf(frase,"%d",&registro[i].NoControl);
        printf("Ingresa nombre de estudiante %d:\n",i);
        fgets(frase, sizeof(frase), stdin);
        sscanf(frase,"%[^\n]s",&registro[i].en);
        printf("Ingresa su promedio final de estudiante %d:\n",i);
        fgets(frase, sizeof(frase), stdin);
        sscanf(frase,"%f\n\n",&registro[i].promedio);
        //practicamente pido y escaneo los datos de las variables que fueron requeridas en sus debidos formatos

    }

    printf("\nInformacion de los alumnos:"); 

    for(i=1; i<=reg; i++)
    {
        printf("\nNumero de control:%d\t Nombre:%s\t Promedio final:%f\t",
               registro[i].NoControl,registro[i].en, registro[i].promedio);
               //imrpimo los datos registrados finales de los estudiantes anteriormente registrados
    }
    return 0;
}
