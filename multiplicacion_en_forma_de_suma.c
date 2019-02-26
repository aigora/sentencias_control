/* Autor: pedro muñoz redondo
grupo: Q103
descripcion:te realiza una multiplicacion en forma de suma repetitiva 
*/
#include <stdio.h>
int main()
{
int i, a,b,resultado=0;	//inicializamos el resultado en 0	


printf("introduce un numero\n"); //introducimo el numero a multiplicar
	scanf("%d",&a);
	printf("introduce otro\n");// introducimos las veces que lo queremos multiplicar
	scanf("%d",&b);
	
	for (i = 1; i <= b-1; i ++)//restamos 1 a las veces que lo queremos multiplicar par que no aparezca un signo '+' de mas.
	{
	
			printf("%d", a);
			printf("+");//mostramos la suma por pantalla
	}
	printf("%d",a); //aqui mostramos la ultima repeticion sin el '+' adicional
for (i = 1; i <= b; i ++)
	resultado+= a;
		printf(" = %d\t", resultado);
return 0;
}
