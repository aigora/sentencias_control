/* Autor: Hugo Garcia Las Heras
Grupo: Q203
Descripción: Programa que permite introducir numeros al usuario y cuando decide parar le muestra por pantalla la resta de todos ellos */

#include <stdio.h>

int main()
{
   char seguir;
   int operador, numero;

   operador= 0;
   do
   {
      printf( "\n   Introduzca un numero entero: " );
      scanf( "%d", &numero);

      operador-= numero;

      printf( "\n   Desea introducir otro numero (s/n)?: " );
      fflush( stdin );
      scanf( "%c", &seguir);
   } 
   while ( seguir != 'n' );
   
printf("La resta de los numeros introducidos es: %d",
    operador );
   return 0;
}
