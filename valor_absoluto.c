#include <stdio.h>
/*
Autora: Ester Ruiz
Grupo: Q103
Descripción: Calcula el valor absoluto de un número entero
*/
int main(){
	int num, resultado;
	printf("Introduce tu numero:\n");
	scanf("%d", &num);
	if(num<0){
		resultado=num*(-1);
		printf("El valor absoluto es %d", resultado);
	}
	else{
		resultado=num;
		printf("El valor absoluto es %d", resultado);
	}
}
