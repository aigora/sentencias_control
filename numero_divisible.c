#include <stdio.h>
/*
Autora: Ester Ruiz
Grupo: Q103
Descripción: Dados dos números enteros tecleados por el usuario, comprobueba si el primero es divisible por el segundo
*/
 int main(){
	int num1,num2;
	printf("Introduce el primer numero:\n");
	scanf("%d", &num1);
	printf("Introduce el segundo numero:\n");
	scanf("%d", &num2);
	
	if(num1%num2==0){
		printf("El primer numero es divisible por el segundo\n");
	}
	else{
		printf("El primer numero no es divisible por el segundo\n");
	}
