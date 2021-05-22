#include <stdio.h>

/*Ejercicio numero 3, comparador de letras*/
int main()
{
    char letra;
    printf("Este programa nos indica si es una letra consnante o una letra vocal.");
    printf( "\n\nIntroduzca la letra que desea comparar : " );
    /*Introduce el caracter introducido a letra*/
    scanf( "%c", &letra );
    /*En esta parte se utliza el signo || para que nos diferencie entre mayuscula o minuscula, nos indica si no es tal es esta otra cosa por que son iguales.*/

    /*Por otra parte si no cumple ninguna de las sentencia if nos da como resultado lo que tiene la sentecia else,*/

    if ( letra == 'a' || letra == 'A' ||
         letra == 'e' || letra == 'E' ||
         letra == 'i' || letra == 'I' ||
         letra == 'o' || letra == 'O' ||
         letra == 'a' || letra == 'U' )
        printf( "\nEs una vocal." );
    else
        printf( "\nNo es vocal." );

  

    return 0;
}
