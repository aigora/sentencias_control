/*
Autor: Javier Palomeque
Grupo: Q103
Descripción: Números impares del 1 al 100
*/

#include<stdio.h>
void main(){
	int i, inicio=1, final=100;
	
	for(i=inicio; i<=final; i++){
		
		if (i%2 != 0)
	        printf("%i\n", i);
    }
}
