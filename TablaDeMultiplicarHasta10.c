/*Autor: Iván Herranz Gumiel
Grupo: Q103
Descripción: Mediante un bucle For el entorno desarrolla las tablas de multiplicar hasta la del 10*/
#include<stdio.h>

int main(){
int x,k,z;
	for (x=0;x<=10;x++){
		for(k=0;k<=9;k++){
			z=x*k;
			printf("%i X %i = %i\n",x,k,z);
		}
		printf("TABLA %i\n",x+1);
	}	
	
}
