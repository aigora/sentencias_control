/* 4. Serie de Fibonacci
Escribe un programa que genere los n primeros términos de la serie de Fibonacci.El número entero n deberá ser leído por teclado.
Este valor debe ser positivo, de forma que si el usuario introduce un valor negativo el programa volverá a pedir que lo introduzca. 
En la serie de Fibonacci los dos primeros números son 1, y el resto se obtiene sumando los dos anteriores: 1,1,2,3,5,8,13,21,...
*/
#include <stdio.h>
int main(){
	int n, n1=1, n2=1, i=1, fib;
	do{
		printf("Introduce un numero entero:\n");
		scanf("%d", &n);
	}
	while(n<1);
	for(i;i<=n; i++)
	{
	if(i<=2)
	fib=1;
	else
	{
		fib=n1+n2;
	}
	printf("La serie de fibonacci es %i:\n", n);
	}
	printf("El primer numero es %i y el segundo %i", n1, n2);

	return 0;
}

