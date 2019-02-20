/*
Autor: Alejandro Tejedor
Grupo:Q103
Descripcion: El programa te dice si el numero que has introducido es multiplo de 2, 3, 5 y si es par o impar
*/
#include <stdio.h>
#include <math.h>

int main (){
	int n;
	printf("Introduce un numero y te dire si es muliplo de 2, de 3 y si es par o impar\n");
	printf("Introduce el numero\n");
	scanf("%d", &n);
	if((n%2)==0){
		if((n%3)==0){
			if((n%5)==0){
				printf("%d es multiplo de 2, de 3, de 5 y es par\n", n);
			}
			else{
				printf("%d es multiplo de 2, de 3 y es par\n", n);	
			}
		}
		else{
			if((n%5)==0){
				printf("%d es multiplo de 2, de 5 y es par\n", n);
			}
			else{
				printf("%d es multiplo de 2 y es par\n", n);
			}
			}
		}
	else{
		if((n%3)==0){
			if((n%5)==0){
				printf("%d es multiplo de 3, de 5 y es impar\n",n);
			}
			else{
				printf("%d es multiplo de 3 y es impar\n",n);
			}
		}
		else{
			if((n%5)==0){
				printf("%d es multiplo de 5 y es impar\n",n);
			}
			else{
				printf("%d no es multiplo de 2, ni de 3, ni de 5 y es impar\n",n);
			}
		}
	}	
	}
	
