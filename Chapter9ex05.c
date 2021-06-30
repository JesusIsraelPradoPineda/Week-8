#include<stdio.h>
char prueba[1000];
char prueba2[1000];
int main() 
{
    int m;
    int pos = 1;
    int xd; //declaro las variables a usar
    printf("dame tamaño de array\n");
    fgets(prueba,sizeof(prueba),stdin);
    sscanf(prueba,"%d",&xd); //pido el tamaño del array a usar
    int v[xd]; //meto la variable dentro del lugar 
    printf("dame los numeros del array\n");
    for(int i=0;i<xd;i++){
      fgets(prueba,sizeof(prueba),stdin);
      sscanf(prueba,"%d",&v[i]);
            //scanf("%i",&v[i]); //escaneo en un for cada variable definida y las guardo en el array
    }
    m = v[0];  //voy a guardar mi variable en esa condicion m
    for(int i = 1; i < xd; ++i) //nuevamente hago el escaneo variable por variable
    {
        if(v[i] > m) //si es mas grande que el nuemro que tiene M
        {
            m = v[i]; //ahora se guarda en la posicion como el mayor
            pos = i; //ubico la posicion de ese numero
        }
    }
    printf("el numero mas grande es %d y esta en la pocision %d\n", m, pos+1); //imprimo resultado
    return 0;
}
