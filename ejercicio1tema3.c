/*
Autor: Rafael García Gómez
Grupo: Q103
Descripción: mayo de tres numeros
*/

#include<stdio.h>
void main(){
	
	int numero,a,b,c;
	printf("introduzca tres numeros: \n");
	scanf("%d %d %d",&a,&b,&c);
	
	if (a>b && a>c){
		printf("%d es el mayor de ellos");
		scanf("%d",&a);
	}
	if (b>a && b>c){
		printf("%d es el mayor de ellos");
		scanf("%d",&b);
	}
	if (c>a && c>b){
		printf("%d es el mayor de ellos");
		scanf("%d",&c);
	}
}
