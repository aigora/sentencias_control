//Autora: VeraValentín Avellón
//Grupo Q103
//Descripción: recomendaciones para conciertos con sentencias condicionales y bucle for
#include<stdio.h>
int main(){
	int precio, zona, i, hora, tipo, dia;
	printf("Elija el precio que desea pagar por la entrada del concierto: 10, 30, 60\n");
	scanf("%i",&precio);
	if(precio==10){
		printf("Elija una zona de Madrid: 1 Noviciado, 2 Gran Via, 3 Tribunal\n");
		scanf("%i",&zona);
		if(zona==1){
			printf("La mejor opcion es la Sala Siroco, vaya andando desde Plaza de España o bajese en en metro Noviciado\n");
		}
		else if(zona==2){
			printf("La mejor opcion es la Sala Costello\n");
		}
		else if(zona==3){
			printf("La mejor opcion es la Sala But\n");
		}
	}
	else if(precio==30){
		printf("Elija una hora:\n");
		for(i=19;i<=22;i++){
			printf("%i\n",i);}
	
			scanf("%i",&hora);
			switch(hora){
				case 19: printf("La mejor opcion es El Circo Price\n");
				break;
				case 20: printf("Salga con mucha antelacion, puede haber atasco si va con el coche o en autobus\n");
				break;
				case 21: printf("La mejor opcion es el Wizink Center\n");
				break;
				case 22: printf("Mire bien el horario de los autobuses si viene en transporte publico\n");
				break;
				default: printf("No hay ningun concierto a esa hora\n");
		
			}
			
			
		}
		
	
	else if(precio==60){
		printf("A que tipo de concierto quiere ir? 1 Pop, 2 musical, 3 flamenco\n");
		scanf("%i",&tipo);
		switch(tipo){
			case 1: printf("Estos son los dias en los que hay conciertos de pop en Madrid este mes de marzo:\n");
			 for(i=1;i<=5;i++){
			 	dia=(i*7);
			 	printf("%i\n",dia);}
			break;
			case 2: printf("Puede ir a ver Billy Elliot o West Side Story");
			break;	
			case 3: printf("Puede ir al Teatro Alfil en la calle del pez");
			break;
			default: printf("elija una opcion valida");
		}
	}
	else if(precio!=10&&precio!=30&&precio!=60){
		printf("Elija un precio valido");
	}
}

