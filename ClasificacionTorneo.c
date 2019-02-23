/* Autor: Adrian Triner
Grupo: Q103 */


#include <stdio.h>

int main ()
{
	int n;
	printf("Introduzca el puesto de su equipo en el campeonato:\n");
	scanf("%d",&n);
	if(n==1)
	{
		printf("Su equipo ha ganado el campeonato.\n",n);
	}
	else if(n>=2 && n<=4)
	{
		printf("Su equipo se ha clasificado para jugar el siguiente torneo.\n",n);
	}
	else if(n>=5 && n<=7)
	{
		printf("Su equipo se mantiene en la misma categoria.\n",n);
	}
	else if(n>=8 && n<=10)
	{
		printf("Su equipo ha descendido a otra categoria.\n",n);
	}
	else
	{
		printf("Error.\n",n);
	}
}
