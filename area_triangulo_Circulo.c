#include <stdio.h>
int main(){
	char opcion;
	float area_circulo,area_triangulo,base,altura,radio;
	const float pi=3.14159;
	printf("Elija entra calcular el area de un circulo (c) o el de un triangulo (t): ");
	scanf("%c",&opcion);
	switch(opcion)
	{
	case 'c':
		{
			printf("Introduce el radio del circulo: ");
			scanf("%f",&radio);
			area_circulo=pi*radio*radio;
			printf("El area del circulo es %f", area_circulo);
			break;
		}
	case 't':
		{
			printf("Introduce la base y la altura del triangulo: ");
			scanf("%f %f",&base,&altura);
			area_triangulo=(base*altura)/2;
			printf("El area del triangulo es %f",area_triangulo);
			break;
		}
	}
	return 0;
}
