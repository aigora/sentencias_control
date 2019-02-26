/* 
Autor: Diego Gómez
Grupo:Q103
Descripcion: Calcula el factorial de un numero mediante el bucle "for".
*/

#include<stdio.h>
main()
{
int numero,i,fact=1;

printf("Introduzca un numero: ");
scanf("%d",&numero);

for(i=1;i<=numero;i++)
fact=fact*i;
printf("Factorial de %d vale %d\n",numero,fact);
}
