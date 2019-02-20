/*
Autora: María Fermosel Álvarez
Grupo: Q103
Descripción: Calcula cuanto tienes que pagar dependiendo de tu edad
*/

#include <stdio.h>
void main ()
{
    int a, b;
    printf("Buenos dias, bienvenido al cine, diganos su edad para que podamos decirle que precio de entrada debe pagar\n");
    printf("introduzca su edad\n");
    scanf ("%i", &a);
    
    if (a>=0 && a<=6)
        printf("El ninho puede entrar gratis");
	else if (a>=6 && a<=16)
        printf("El adolescente tiene que pagar una entrada de 6 euros");
    else if (a>=16 && a<=26)
        {	printf("¿Puede presentar un carnet de estudiante?\n");
        	printf("Introduzca un 1 para si y un 0 para no\n");
        	scanf ("%i", &b);
        	
        	switch(b)
   			{case 1:
    			printf ("Por demostrar que es estudiante puede pagar una entrada de 6 euros\n");
    		break;
   			case 0:
    			printf ("Por no poder demostrar que es estudiante tiene que pagar una entrada de 8 euros\n");
    		break;}
    	}
    else if (a>26)
    	printf("tiene que pagar una entrada de adulto, son 10 euros por favor");
}
