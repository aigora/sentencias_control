#include <stdio.h>
/*
Autora: Ester Ruiz
Grupo: Q103
Descripción: Lee una letra y determina si es una vocal o no
*/

int main(){
	char letra;
	printf("Introduce una letra:\n");
	scanf("%c", &letra);
	
	if(letra=='a' || letra=='e' || letra=='i' ||letra=='o'||letra=='u'||letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U'){
		printf("La letra es una vocal\n");
	}	
	else{
		printf("La letra no es una vocal\n");
	}
