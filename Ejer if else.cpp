#include <stdio.h>

int main()
{
	float peso,altura,IMC;
	
	printf("Introduce tu peso:\n");
	
	scanf("%f",&peso);
	
	printf("Introduce tu altura\n");
	
	scanf("%f",&altura);
	
	IMC = peso/(altura*altura);	
	
	printf("Su Indice de masa corporal es:%2.f\n",IMC);
    
	if(IMC>30)
	{
		printf("Su peso es bastante elevado para su estatura, deberia practicar algun deporte o comenzar alguna dieta\n");
	}	
	
	else if(IMC<15)
	{
	    printf("Su peso es muy bajo para su estatura, deberia comer mas\n");
	}
	
	else 
	{
		printf("Su peso esta de acuerdo con su estatura\n");
	}
}

