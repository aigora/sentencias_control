/*
Autor: Alejandro Martin Herreros
Curso: Q103
Descripcion: Introducir un nunmero y el programa te indica las cifras que tiene tu numero.
*/
#include<stdio.h> 
int main () 
{ 
int x;
printf("Escriba un numero entero positivo \n");
scanf("%i", &x);
if (x>=100)
printf("El numero %i tiene tres o mas cifras \n", x);
	else if (x>0)
	printf("El numero % tiene dos cifras ", x);
		else 
		printf("Su numero es el 0 \n");
		


return 0;
}
