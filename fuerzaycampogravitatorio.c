// Mario Garrido 
//Q103
//Programa que nos permite calcular la fuerza gravitatoria y campo gravitatorio, pidiendo que el usuario elija uno de los planetas propuestos.
#include <stdio.h>
#define masavenus 4.867e24
#define masatierra 5.972e24
#define masamarte 6.39e23
#define radiovenus 6052
#define radiotierra 6371
#define radiomarte 3390
#define G 6.67e-11


int main(){


	float masa,altura,campo,fuerzagrav;
	int venus=1;
	int marte=2;
	int tierra=3;
	int planeta;
		
		
	printf("En este programa podras calcular la fuerza gravitatoria de los planetas sobre los satelites, ademas de su campo gravitatorio\n");
	printf("Podras elegir entre Venus,Marte o Tierra\n");
	printf("Elige uno de esos tres planetas pulsando 1,2 o 3 respectivamente\n");
	scanf("%i",&planeta);
	
	
	if (planeta==1){
		
		printf("Has elegido el planeta Venus\n");
		printf("Introduce la masa del satelite en kg\n");
		scanf("%f",&masa);
		
		printf("Ahora introduce a la altura que se encuentra en metros\n");
		scanf("%f",&altura);
		
		fuerzagrav=G*masavenus*masa/(radiovenus+altura)*(radiovenus+altura);
		
		printf("la fuerza gravitatoria es: %.2\n",fuerzagrav);
		
		campo=fuerzagrav/(masa);
		
		printf("Ademas su campo gravitatorio es %.2f\n",campo);
		
    }
    
    if (planeta==2){
		
		printf("Has elegido el planeta Marte\n");
		printf("Introduce la masa del satelite en kg\n");
		scanf("%f",&masa);
		
		printf("Ahora introduce a la altura que se encuentra en metros\n");
		scanf("%f",&altura);
		
		fuerzagrav=G*masamarte*masa/(radiomarte+altura)*(radiomarte+altura);
		
		printf("la fuerza gravitatoria es: %.2f\n",fuerzagrav);
		
		campo=fuerzagrav/(masa);
		
		printf("Ademas su campo gravitatorio es %.2f\n",campo);
		
    }
    
    if (planeta==3){
		
		printf("Has elegido el planeta Tierra\n");
		printf("Introduce la masa del satelite en kg\n");
		scanf("%f",&masa);
		
		printf("Ahora introduce a la altura que se encuentra en metros\n");
		scanf("%f",&altura);
		
		fuerzagrav=G*masatierra*masa/(radiotierra+altura)*(radiotierra+altura);
		
		printf("la fuerza gravitatoria es: %.2f\n",fuerzagrav);
		
		campo=fuerzagrav/(masa);
		
		printf("Ademas su campo gravitatorio es %.2f\n",campo);
		
    }
		

	return 0;
		
	
		
		
		
		


	
}
