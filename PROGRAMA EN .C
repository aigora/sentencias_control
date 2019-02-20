//autor:Samuel Hornsby Altares
//grupo:Q103
//descripción: Este programa identifica las matriculas de coches de forma par-impar. Si es par, no puedes aparcar y, si es impar,puedes aparcar en una zona u otra dependiendo del distintivo de contaminacion que tengas.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main()
{
	int matricula,distintivo,C,B,A,impar;
	printf("Introduzca los numeros de la matricula de su vehiculo\t");
	scanf("%d",&matricula);
	impar=matricula%2;
	
	if(matricula%2==0) {
		printf("No tiene acceso al estacionamiento en el casco antiguo de la ciudad\n");
	}
		if(impar) {
		printf("Indique su distintivo de contaminacion:\t");
		printf("A\t");
		printf("B\t");
		printf("C\t");
		scanf("%d",&distintivo);	
		}
			if(distintivo==C) {
				printf("Usted puede aparcar solo en la zona 3\n\a");
			}
			else if(distintivo==B) {
				printf("Usted puede aparcar solo en las zonas 2 y 3\n\a\a");
			}
			else {
				printf("Usted puede aparcar en las zonas 1, 2 y 3\n\a\a\a");
			}
system("PAUSE");
return 0;
}
