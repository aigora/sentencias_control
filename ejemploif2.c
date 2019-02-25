#include <stdio.h>
int main ()
{
int n;
printf("Escribe un número entero\n");
scanf(" %d", &n);
if (n % 2 == 0) 
{
printf("El número %d es par.\n", n);
}
printf("Gracias por participar.\n");
return 0;
}
