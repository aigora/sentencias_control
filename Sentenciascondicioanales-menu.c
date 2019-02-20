/*Autora: Marina Rodríguez Martinez
Grupo: Q-103
Descripcion:Elegir un menu a partir de sentecias condicionales*/


#include <stdio.h>
int main (){
	//VARIABLES
	int preciodelmenu, menu, si, no, primero, segundo, postre;
	
	printf("¿Quieres menu del dia?\n");
	scanf("%d", &menu);
	
	if(menu==no){
		printf("Adios, que tengas un buen dia\n");
	}
	else{
		printf("Elige tu primero: 1 ensalada cesar, 2 crema de verdura");
		scanf("%d", &primero);
		if (primero == 1){
			printf("Ensalada cesar de primero, y de segundo?\n");
		}
		else if(primero == 2){
			printf("Crema de verduras de primero, y de segundo?\n");
		}
		printf("Elige tu segundo: 1 costillas asadas, 2 tempura de verduras");
		scanf("%d", &segundo);
		if (segundo == 1){
			printf("Costillas asadas de segundo, y de postre?\n");
		}
		else if(segundo == 2){
			printf("Tempura de verduras de segundo, y de postres?\n");
		}
		printf("Elige el postre: 1 tarta de manzana, 2 natillas, 3 fruta del tiempo");
		scanf("%d", &postre);
		if(postre == 1){
			printf("Y tarta de manzana para terminar\n");
		}
		else if(postre == 2){
			printf("Y natillas para terminar\n");
		}
		else if(postre == 3){
			printf("Y fruta para terminar\n");
		}
		preciodelmenu = (primero+segundo+postre);
		printf("El precio total del menu es de 6 euros\n", preciodelmenu);
	}
	
}
