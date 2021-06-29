#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char prueba[400];
    char p[200];
    int n,palabras;
    printf("ingresa un testo:\n");
    fgets(prueba,sizeof(prueba),stdin);
    //sscanf(prueba,"%[^\n]s",p );
    sscanf(prueba,"%[^\n]s",p);
    printf("Bienvenido, checa algunos datos interesantes de tu testo ingresado \n");
    salto(p);
}
    int salto(char *xd) 
    {
    char vamosaextraeruncaracterdetunombre;
    char prev =' ';
    int m=0,n=0;
    printf("en letras, tu 'testo' se divide como: \n");
    while (*xd!='\0')
    {
    vamosaextraeruncaracterdetunombre=*xd;
      printf("%c\n",vamosaextraeruncaracterdetunombre);
      if(vamosaextraeruncaracterdetunombre!=' '){
        m=m+1;
      }
      if(vamosaextraeruncaracterdetunombre==' '&&prev!=' '){
      n=n+1;
      }
      prev=vamosaextraeruncaracterdetunombre;
      xd++;
      
    }
    if (vamosaextraeruncaracterdetunombre==' '){
    printf("tu testo tiene %d letras y %d espacios, dando lugar a %d palabras\n",m,n,n);
    }
    else {
    printf("tu testo tiene %d letras y %d espacios, dando lugar a %d palabras\n",m,n,n+1);
    }
    return 0;
    }
