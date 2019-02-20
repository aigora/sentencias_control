/*
Autora: Paula de Antonio 
Grupo: Q103
Descripcon: Resolucion de una ecuacion de segundo grado.
*/

#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c;
	float dentroraiz;
	float sol1, sol2, sol3, sol4, solimaginaria;
	
	printf("Introduce los coeficientes de la ecuacion de segundo grado.\n");
	printf("a: ");
	scanf("%f", &a);
	printf("b: ");
	scanf("%f", &b);
	printf("c: ");
	scanf("%f", &c);
	
	if(a != 0){
		//Resolucion ec: (-b +- sqrt(b^2 -4*a*c)/2*a.
		dentroraiz = pow(b,2) - 4*a*c;
		//printf("%f", dentroraiz);
		if(dentroraiz > 0){
			printf("La ecuacion tiene dos soluciones reales:\n");
				sol1 = (-b + sqrt(dentroraiz)) / (2*a);
				sol2 = (-b - sqrt(dentroraiz)) / (2*a);
			printf("x1 = %.2f.\n", sol1);
			printf("x2 = %.2f.\n", sol2);
			
		}else if(dentroraiz == 0){
			printf("La ecuacion tiene una solucion doble:\n");
				sol3 = -b / (2*a);
			printf("x = %.2f.\n", sol3);
			
		}else{ //dentroraiz<0
			printf("La ecuacion tiene una solucion real:\n");
				sol4 =  -b / (2 * a);
			printf("x1 = %f.\n", sol4);
			
			printf("Y una  solucion imaginria:\n");
				solimaginaria = sqrt(-dentroraiz) / (2 * a);
			printf("x2 = %f.\n", solimaginaria);
		}
	}else{
		printf("No se trata de una ecuacion de segundo grado porque a=0.");
	}
	
	return 0;
}
