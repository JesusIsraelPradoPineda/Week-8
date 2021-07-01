/********************************************************
 * Ex02 -- Fechas. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: Hacer uso de los comandos y la logica para hacer que funcione el programa. *
 * *
 * Usage: *
 * Put the date and you''ll get the distance in minutes. *
 ********************************************************/
#include <stdio.h>

int main(void) {
  int x,a,b,c,d,e,f,g,h,i,j,k,en=31,feb=28,mar=31,ab=30,mayo=31,junio=30,Julio=31,ago=31,sep=30,oct=31,nov=30,dic=31,n=0,m=0,res,v1,v2; //se incluyen todas las variables a trabajar
  char at[1000];
  printf("dame la fecha con el formato DD MM AAAA\n");
  fgets(at, sizeof(at), stdin);
  sscanf(at,"%d %d %d",&x,&a,&b);
  printf("dame la otra fecha con el mismo formato \n");
   fgets(at, sizeof(at), stdin);
  sscanf(at,"%d %d %d",&c,&d,&e);
  printf ("Tu pusiste %d/%d/%d y %d/%d/%d\n",x,a,b,c,d,e); //pido datos y luego muestro en pantalla los mismos
  if (a<=12&&d<=12){ //no tenemos 13 meses, si pones 13 meses no sera valido
    switch(a){
      case 1:
      printf("mes de Enero\n");
      if (x<=31){
        x=31-x+feb+mar+ab+mayo+junio+Julio+ago+sep+oct+nov+dic; //para saber cuantos dias falta que a partir del dia n del mes n, se acabe el año, se realizan esta cadena de operacoiones
        n=n+1; //funcion boleto:si se cumple la condicion, tienes el boleto para entrar a la siguiente parte
      }
      else {
        printf("no valido debido a que enero no tiene %d dias\n",x);//si al inicio del programa metiste mas dias del que contiene n mes, te dira que no es valido(aplica en todos)
      }
      break; //aplica todo en la misma
      case 2:
      printf("mes de febrero\n");
            if (x<=28){
        x=28-x+mar+ab+mayo+junio+Julio+ago+sep+oct+nov+dic;
        n=n+1;
      }
      else {
        printf("no valido debido a que febrero no tiene %d dias\n",x);
      }
      break;
      case 3:
      printf("mes de Marzo\n");
      if (x<=31){
        x=31-x+ab+mayo+junio+Julio+ago+sep+oct+nov+dic;
        n=n+1;
      }
      else {
        printf("no valido debido a que Marzo no tiene %d dias\n",x);
      }
      break;
      case 4:
      printf("mes de Abril\n");
      if (x<=30){
        x=30-x+mayo+junio+Julio+ago+sep+oct+nov+dic;
        n=n+1;
      }
      else {
        printf("no valido debido a que Abril no tiene %d dias\n",x);
      }
      break;
      case 5:
      printf("mes de Mayo\n");
      if (x<=31){
        x=31-x+junio+Julio+ago+sep+oct+nov+dic;
        n=n+1;
      }
      else {
        printf("no valido debido a que Mayo no tiene %d dias\n",x);
      }
      break;
      case 6:
      printf("mes de Junio\n");
      if (x<=30){
        x=30-x+Julio+ago+sep+oct+nov+dic;
        n=n+1;
      }
      else {
        printf("no valido debido a que Junio no tiene %d dias\n",x);
      }
      break;
      case 7:
      printf("mes de Julio\n");
      if (x<=31){
        x=31-x+ago+sep+oct+nov+dic;
        n=n+1;
      }
      else {
        printf("no valido debido a que Julio no tiene %d dias\n",x);
      }
      case 8:
      printf("mes de Agosto\n");
      if (x<=31){
        x=31-x+sep+oct+nov+dic;
        n=n+1;
      }
      else {
        printf("no valido debido a que Agosto no tiene %d dias\n",x);
      }
      break;
      case 9:
      printf("mes de Semptiembre\n");
      if (x<=30){
        x=30-x+oct+nov+dic;
        n=n+1;
      }
      else {
        printf("no valido debido a que Septiembre no tiene %d dias\n",x);
      }
      break;
      case 10:
      printf("mes de Octubre \n");
      if (x<=31){
        x=31-x+nov+dic;;
        n=n+1;
      }
      else {
        printf("no valido debido a que Octubre no tiene %d dias\n",x);
      }
      break;
      case 11:
      printf("mes de Noviembre \n");
      if (x<=30){
        x=30-x+dic;;
        n=n+1;
      }
      else {
        printf("no valido debido a que Noviembre no tiene %d dias \n",x);
      }
      break;
      case 12:
      printf("mes de Diciembre\n");
      if (x<=31){
        x=31-x;
        n=n+1;
      }
      else {
        printf("no valido debido a que Diciembre no tiene %d dias\n",x);
      }
      break;
    }
    switch(d){
      case 1:
      printf("mes de Enero\n");
      if (c<=31){
        c=31-c+feb+mar+ab+mayo+junio+Julio+ago+sep+oct+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que enero no tiene %d dias\n",c);
      }
      break;
      case 2:
      printf("mes de febrero\n");
            if (c<=28){
        c=28-c+mar+ab+mayo+junio+Julio+ago+sep+oct+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que febrero no tiene %d dias\n",c);
      }
      break;
      case 3:
      printf("mes de Marzo\n");
      if (c<=31){
        c=31-c+ab+mayo+junio+Julio+ago+sep+oct+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que Marzo no tiene %d dias\n",c);
      }
      break;
      case 4:
      printf("mes de Abril\n");
      if (c<=30){
         c=30-c+mayo+junio+Julio+ago+sep+oct+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que Abril no tiene %d dias\n",c);
      }
      break;
      case 5:
      printf("mes de Mayo\n");
      if (c<=31){
         c=31-c+junio+Julio+ago+sep+oct+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que Mayo no tiene %d dias\n",c);
      }
      break;
      case 6:
      printf("mes de Junio\n");
      if (c<=30){
         c=30-c+Julio+ago+sep+oct+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que Junio no tiene %d dias\n",c);
      }
      break;
      case 7:
      printf("mes de Julio\n");
      if (c<=31){
         c=31-c+ago+sep+oct+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que Julio no tiene %d dias\n",c);
      }
      case 8:
      printf("mes de Agosto\n");
      if (c<=31){
         c=31-c+sep+oct+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que Agosto no tiene %d dias\n",c);
      }
      break;
      case 9:
      printf("mes de Semptiembre\n");
      if (c<=30){
         c=30-c+oct+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que Septiembre no tiene %d dias\n",c);
      }
      break;
      case 10:
      printf("mes de Octubre \n");
      if (c<=31){
        c=31-c+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que Octubre no tiene %d dias\n",c);
      }
      break;
      case 11:
      printf("mes de Noviembre \n");
      if (c<=30){
        c=31-c+dic;
        m=m+1;
        
      }
      else {
        printf("no valido debido a que Noviembre no tiene %d dias\n",c);
      }
      break;
      case 12:
      printf("mes de Diciembre\n");
      if (c<=31){
        c=31-c;
        m=m+1;
      }
      else {
        printf("no valido debido a que Diciembre no tiene %d dias\n",c);
      }
      break;
    }
if (n==1 && m==1){ //si tienes el boleto de n y de m juntos , se realiza las operaciones, de lo contrario no se podra
v1=((e-b)*365); //multiplicas al año por 365
v2=(x-c); //para saber los dias entre dos fechas de un mismo año, se restan 
res= v1+v2; //el resultado final se define como la suma de tus años dias mas tus dias normales
    if(res<0){  //si el resultado es un numero negativo
printf("la distancia en minutos entre las 2 fechas es de %d minutos\n",res*-1*1440); } //solamente lo multiplicamos por -1 para tener dias positivos
  else{printf("la distancia en minutos entre las 2 fechas es de %d minutos\n",res*1440);} //solo imprime el resultado
  }
  }
  
  else {
    printf("no es valido el mes debido que no existe ya sea este mes %d o este %d \n",a,d);
  }
  }
