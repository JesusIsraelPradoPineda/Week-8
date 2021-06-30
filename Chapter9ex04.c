#include<stdio.h>
char prueba[1000];
char prueba2[1000];
int main() 
{
    int m=0,a;
    int xd; //declaro las variables a usar
    printf("dame tamaño de array\n");
    fgets(prueba,sizeof(prueba),stdin);
    sscanf(prueba,"%d",&xd); //pido el tamaño del array a usar
    int v[xd]; //meto la variable dentro del lugar 
    printf("dame los numeros del array\n");
    for(int i=0;i<xd;i++){
      fgets(prueba,sizeof(prueba),stdin);
      sscanf(prueba,"%d",&v[i]);
      //escaneo en un for cada variable definida y las guardo en el array
    }
    printf("dame el numero que quieres saber cuantas veces aparece en el arreglo\n");
    fgets(prueba2,sizeof(prueba2),stdin);
    sscanf(prueba2,"%d",&m); 
    m = v[0];  //voy a guardar mi variable en esa condicion m
    for(int i = 1; i < xd; ++i) //nuevamente hago el escaneo variable por variable
    {
        if(v[i] == m) //si es igual al seleccionado
        {
            m=m+1; //se hace una suma si este es igual para hacer un conteo
        }
    }
    printf("el numero seleccionado se repite %d veces\n", m); //imprimo resultado
    return 0;
}
