/* 
Autora: Rocío Berzal Cabetas
Grupo: Q103
Descripcion: Imprime el tipo de beca al que puedes optar según tu renta 
*/

#include <stdio.h>

int main()
{
	printf ("BECAS MINISTERIO DE EDUCACION\n");
	
	float mensual, anual, paga;
	int num, personas;
	char extra;
	
	printf("Introduce tu renta mensual:");
	scanf("%f", &mensual);
	fflush (stdin);
	
	printf("¿Miembros en la unidad familiar?:");
	scanf("%i", &personas);
	fflush (stdin);
	
	printf("¿Tiene pagas extras? (S=si  N=no) :");
	scanf("%c", &extra);
	fflush (stdin);
	
	if (extra=='S' || extra=='s')
	{
		printf("¿Cuantas?"); 
		scanf("%i", &num);
		printf("Importe: ");
		scanf("%f", &paga);	
		anual=12*mensual+(num*paga);
		
		if (anual<25000 && personas>=3)
			printf("Su renta anual es de %.2f, por lo tanto recibira el importe integro de la matricula universitariay un extra de 1000€\n", anual);
		else if (anual>25000 && anual<30000 && personas<=4)
			printf("Su renta anual es de %.2f, por lo tanto recibira el importe integro de la matricula universitaria\n", anual);
		else if (anual>30000 && personas<=4)
			printf("Su renta anual es de %.2f, por lo tanto no recibirá beca\n", anual);
		else if (anual>30000 && personas>=5)
			printf("Familia numerosa. 50% en su matricula universitaria, independientemente de su renta\n", anual);
		else
			printf("Error");
	}
	else if (extra=='N'||extra=='n')
	{
		anual=12*mensual;
		if (anual<25000 && personas>=3)
			printf("Su renta anual es de %.2f, por lo tanto recibira el importe integro de la matricula universitariay un extra de 1000€\n", anual);
		else if (anual>25000 && anual<30000 && personas>=3)
			printf("Su renta anual es de %.2f, por lo tanto recibira el importe integro de la matricula universitaria\n", anual);
		else if (anual>30000 && personas<=4)
			printf("Su renta anual es de %.2f, por lo tanto no recibirá beca\n", anual);
		else if (anual>30000 && personas>=5)
			printf("Familia numerosa. 50% en su matricula universitaria, independientemente de su renta\n", anual);
		else
			printf("Error");
	}
	else 		
		printf("Dato mal introducido\n");
}
