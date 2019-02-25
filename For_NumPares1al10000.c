/*Autora: Hanan El Boudakhani Ballafkih
Grupo: Q103
Descripción: uso del bucle para imprimir numeros pares del 1 al 10000 */

#include <stdio.h>
int main(){
	int i;
	for(i=1; i<=10000;i++){
		if(i%2==0)
			printf("%d\n",i);	
	}
	return(0);
}
