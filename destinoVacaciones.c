//Autor: Dalila Martinez Baez Q103
//Elige tu destino para irte de vacaciones y los dias que quieres estar
#include<stdio.h>
int main()
{
	char ir;
	int dias;
	printf("A donde quieres ir? Jamaica (j), Brasil (b), Francia (f), Irlanda (i) \n");
	scanf("%c",&ir);
	printf("Cuantos dias te gustaria estar? 1semana(1), 10 dias(10), 15 dias (15) \n");
	scanf("%i",&dias);
	switch(ir)
	{
		case'j':
			printf("Su destino es Jamaica \n");
			break;
		case'b':
			printf("Su destino es Brasil \n");
			break;
		case'f':
			printf("Su destino es Francia \n");
			break;
		case'i':
			printf("Su destino es Irlanda \n");
			break;
		default:
			printf("Vuelve a intentarlo \n");
			break;
	}
	if(dias==1)
		printf("Su estancia sera de 1 semana por 200 euros  \n");
	else if(dias==10)
		printf("Su estancia sera de 10 dias por 500 euros  \n");
	else if(dias==15)
		printf("Su estancia sera de 15 dias por 900 euros  \n");
	else
		printf("Vuelva a hacerlo \n");
	return 0;
}
