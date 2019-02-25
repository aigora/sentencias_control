#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Samuel Hornsby
Q103
Este programa pide al usuario que introduzca un
numero determinado para asi calcular el factorial
de dicha cifra*/
void autor(void);
void explicacion(void);
int main()
{
	int n,i,fact=1;
	autor();
	explicacion();
	printf("Introduzca un numero:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		fact*=i;
	printf("El factorial de %d vale %d\n",n,fact);
}
void autor(void)
{
	printf("Autor: Samuel Hornsby\n\n");
}
void explicacion(void)
{
	printf("Este programa pide al usuario que introduzca un\n"
	"numero determinado para asi calcular el factorial de dicha\n"
	"cifra\n\n");
	printf("El usuario lo introduce y el programa imprime en\n" 
	"pantalla el factorial de dicho numero\n\n");
}
/*Nota:hay un pequeño error, ya que el programa comienza 
a imprimir factoriales negativos a partir del numero 17.
A parit del numero 34, todos los factoriales que aparecen
en pantalla son 0.*/

