//Ejercicio 5

#include<stdio.h>

int main(){
	
	//Declaración de variables
	char (x);
	//Funcionalidad
	printf("Introduzca la letra o caracter a clasificar\n");
	scanf("%c",&x);
	if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
		printf("%c es una vocal",x);
		}
	else if (x>=65&&x<=90||x>=97&&x<=122)
		printf("%c es una consonante",x);
	else
	printf("%c es un caracter",x);

}
