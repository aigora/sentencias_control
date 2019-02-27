/*
Autora: María Fermosel Álvarez
Grupo: Q103
Descripcon: Programa para resorver una ecuación de segundo grado.
*/

#include<stdio.h>
#include<math.h>

void main()
{
	float a, b, c, op, s1, s2, s3, s4, s5;
	printf("vamos a calcular una ecuacion de segundo grado\n");
	printf("introduce el coeficiente a\n");
	scanf("%f", &a);
	printf("introduce el coeficiente b\n");
	scanf("%f", &b);
	printf("introduce el coeficiente c\n");
	scanf("%f", &c);
	
	if(a != 0 )
		{ op=pow(b, 2)-(4*a*c);
			if(op>0)
				{s1=((-b)+sqrt(op))/(2*a);
				s2=((-b)-sqrt(op))/(2*a);
				printf("la ecuacion tiene dos soluciones reales: %.2f y %.2f", s1, s2);
				}
			else if (op==0)
				{s3=-b/(2*a);
				printf("la solucion de la ecuacion de segundo grado es %f:\n", s3);
				}
			else
				{s4=-b/(2*a);
				s5=sqrt(-op)/(2*a);
				printf("la raiz real de la ecuacion es %.2f y la imaginaria es %.2f\n", s4, s5);
				}
		}
	else
		{printf("el coeficiente a no puede ser 0\n");
		}
}
