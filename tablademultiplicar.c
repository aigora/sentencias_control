/*
Autor:Samuel Cerro Hernández
Grupo:Q103
Descripcion: Este programa calcula e imprime la tabla de multiplicación de el número introducido por el usuario.
*/


#include<stdio.h>

int main (void){
	int Num,x;
	printf("Introduzca el numero del que desea obtener la tabla de multiplicacion:");
	scanf("%f", &Num);
	for(x=0; x<=10;x++)
	{	

	printf("%d*%d= %d\n",Num,x,x*Num);
	
}
printf("\n");
return 0;

}
