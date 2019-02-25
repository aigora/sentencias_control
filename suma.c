// Yessenia salome lopez cevallos 54039
// grupo Q103
// Programa que te reliaza la suma hasta un  numero que es pedido por el programa y la suma anterior. el numero empieza en 0
#include <stdio.h>
int main()
{
int num, num1;
int suma=0;
printf ( " Introduzca  el numero ");
scanf("%d", &num1);
for(num=0; num<=num1; num++)
{
suma = suma + num;

printf("Suma = %d\n", suma);}}
