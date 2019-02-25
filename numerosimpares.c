/*
autor: Héctor Domínguez Mora
Grupo: Q-103
Listado de n números impares 1-50
*/




#include<stdio.h>
void main (){
	int i;
	for(i=1; i<=100; i++){
		
		if (i%2 != 0)
		printf("%d\n",i);
	}
}
