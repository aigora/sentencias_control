/*Nombre: Marcos Calderon 
grupo Q103
*/
#include<stdio.h> 
void main()
{
	int i,n;
	printf("Seleccione la cuentra atras que desee:(debe ser un numero entero)\n");
	scanf("%i",&n);
	printf("Cuenta atras de %i:\n",n);
	for (i=n;i>=0;i--)
	{
		printf("%i\t",i);
	}
	
}
