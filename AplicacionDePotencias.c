//Juan Santamaría lillo
// Q103 54868
// Descripcion: Aplica una potencia a la sucesion de numeros hasta 10000.
#include<stdio.h>
#include<math.h>

int main()
{
int a;
for(a=1; a<=10000;a=pow(a=a+1,2))
{printf("%d\n", a);
}
printf("El numero ya es mayor que 10000\n");
}































