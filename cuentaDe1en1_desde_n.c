/*
autor: Pedro Muñoz
grupo:q013
descripcion: cuenta de 1 en 1 desde n
*/
#include <stdio.h>
int main()
{
int i, a = 0, b = 100, n;
// con el bucle while conseguimos que al meter un valor 
//menor que uno, el programa te lo vuelve a pedir
do
{
printf("Elige el valor de n: ");
scanf(" %d", &n);
}
while (n < 1);
// cuando se mete el numero correcto de n,
// el programa muestra por programa nos numeros entre n y 100 contando de 1 en 1
for (i = n; i <= b; i += 1)
printf(" %d\t", i);
return 0;
}

