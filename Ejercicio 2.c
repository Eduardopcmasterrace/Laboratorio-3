#include <stdio.h>

/*Funcion principal que se conservo*/
int main (int argc, char * argv []){
  int num=0;
  int fact=1;
   

  printf("Insertar numero para calcular su factorial:");
  
  /*Este comando se encarga de darle valor ala variable num.*/
  scanf("%d",&num);
 /*Ciclo for para que nos sirva de acumulador*/
  for(num;num>0;num--){
   /*Operacion para obtener el factorial*/ 
    fact=fact*num;
  }
  /*Impresion del numero factorial.*/
  printf("El factorial es :%d",fact);
  return 0;
}

