#include <stdio.h>
#include <string.h>
char p[200]; 
int main(void)
{
    char prueba[400]; 
    printf("ingresa un testo:\n");
    fgets(prueba,sizeof(prueba),stdin);
    sscanf(prueba,"%[^\n]s",p); 
    salto(p);
}
    int salto(char *xd)
    {
    char vamosaextraeruncaracterdetunombre;  
    char prev =' ';
    int m=0,n=0; 
    printf("tu metiste lo siguiente:\n%s \n",p);
    printf("remplazando guiones comunes por guiones bajos seria: \n");
    while (*xd!='\0') 
    {
    vamosaextraeruncaracterdetunombre=*xd; 
      if(vamosaextraeruncaracterdetunombre=='-'){ 
        printf("_"); 
      }
      else {printf("%c",vamosaextraeruncaracterdetunombre);}
      xd++;
      
    }
    return 0;
    
    }
