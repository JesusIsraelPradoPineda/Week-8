#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char t1[400]; 
    char t2[400]; //defino variables a trabajar
    printf("ingresa un testo 1:\n"); 
    fgets(t1,sizeof(t1),stdin);
    sscanf(t1,"%[^\n]s",t1); //pido el primer array y lo guardo dobre el mismo
    printf("ingresa un testo 2:\n");
    fgets(t2,sizeof(t2),stdin);
    sscanf(t2,"%[^\n]s",t2); //pido otro array y lo guardo de igual forma
    printf("tu metiste %s en tu testo 1\n",t1);
    printf("\n"); 
    printf("tu metiste %s en tu testo 2\n",t2); //le confirmo al usuario sus datos que ingreso
    printf("\n");
    if (strcmp(t1,t2)==0){ //strcmp sirve para comparar cadenas
      printf("son identicas tus lineas we");
     }
     else {
       printf("son diferentes"); //cero que la declaracion de control lo dice todo...
     }
    return 0;
}
