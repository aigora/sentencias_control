/*Autora: Vera Valentín Avellón
  Grupo: Q103
  Descripcion: Selección del tipo de combinatoria estadística según si importa o no el orden y si se repiten elementos*/
  #include<stdio.h>
int main(){
	
	int si=1, no=0, pregunta1, pregunta2, pregunta3, pregunta4, pregunta5;
	
	printf("Para todas las preguntas, 1 si, 0 no\n");
	
	printf("Importa el orden?\n");
	scanf("%d",&pregunta1);
	
	if (pregunta1==0){
		printf("Es una combinacion, se repiten? 1 si, 0 no\n");
		scanf("%d",&pregunta2);
		if(pregunta2==0){
			printf("Combinaciones de m elementos tomados de n en n");
		}
		else{
			printf("Es una combinacion con repeticion");
		}
		
	}
	else {
		printf("Es una variacion o permutacion, se repiten?\n");
		scanf("%d",&pregunta3);
		if(pregunta3==0){
			printf("m=n?\n");
			scanf("%d",&pregunta4);
			if(pregunta4==0){
				printf("Es una variacion de  elementos tomados de n en n\n");
			}
			else{
				printf("Es una permutacion de m elementos");
			}
		}
		else{
			printf("Es una variacion o permutacion con repeticion, se fija el numero de veces que se repite cada elemento?\n");
			scanf("%d",&pregunta5);
			if(pregunta5==0){
				printf("Es una variacion con repetcion\n");
				
			}
			else{
				printf("Es una permutacion con repeticiones nk\n");
			}
		}
	}
	
}
