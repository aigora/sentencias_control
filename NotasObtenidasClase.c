
/*
Autora: Wasima Simouh
Grupo:Q103
Descripción: Programa qu describe tus notas
*/

#include<stdio.h>
int main()
{
	float nota;
	printf("Escribe tu nota, por favor:\n");
	scanf("%f", &nota);
	
	if(nota<5) // Si se puede poner (tapas!=0 && tapas!=1 && tapas!=2)
	printf("Tiene un suspenso\n");
	
	else if(nota<6)
	printf("Tiene un suficiente\n");
	
	else if(nota<7)
	printf("Tiene un bien\n");
	
	else if(nota<9)
	printf("Tiene un notable\n");
	
	else if (nota<10)
	printf("Tiene un sobresaliente\n");
	
	else
	printf("Tiene matricula\n");
	
	return 0;
}
