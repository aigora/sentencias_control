/* Autor: Ester Ruiz Puerto
Grupo:Q103
Descripción: Este programa muestra las raices cuadradras de los primeros 50 números naturales. */
#include<stdio.h>
int main(){
	float n;
	int i;
	for(i=1;i<=50;i++){
		n=pow(i,0.5);
		printf("%.2f  ", n);
	}
}
