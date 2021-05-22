#include <stdio.h>

int numero=0;
/*Se inicia un contador en 0*/
int contador=0;
int main()
/* Se le da un valor ala variables y se inicia un contador, este contador es igual a el numero que es el que se va a operar  y la suma es ese numero menos 1 */
{

 printf("Programa para calcular numeros triangulares de 0 a 100.\n");
 for(numero=1; numero<=13; numero++){
  
   contador=contador+numero-1;

    /*Se imprime el numero*/ 

     printf("El numero %d es triangular \n", numero+contador);}
   return 0; 
}
