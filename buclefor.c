
// Nombre : Javier Benavides Muñoz
// Grupo : Q103
// Deescripcion : Suma de los 10 primeros enteros


#include <stdio.h>
int main()
{
int i, suma = 0, n = 10;

for (i = 1; i <= n; i++)
{
suma += i;
}

printf("La suma de los %d primeros enteros es %d",n, suma);

return 0;

}
