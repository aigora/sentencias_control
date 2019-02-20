/*
Autor: Héctor Domínguez Mora
Grupo: Q103
Descripcon: Obtener día de la semana
*/



#include <stdio.h>
int main(){
	int numero,resto;
	printf("Introduzca un numero entero:\n");
	scanf("%d",&numero);
	
		resto=numero%7;
			printf("el dia de la semana e domingo");
	
	     if(resto==0){
		
		    printf("el dia de la semana es domingo");
		}
		
		else if(resto==1){

		    printf("el dia de la semana es lunes");
		}
		else if(resto==2){
		
		    printf("el dia de la semana es martes");
		}
			else if(resto==3){
		
		    printf("el dia de la semana es miercoles");
		}
			else if(resto==4){
		
		    printf("el dia de la semana es jueves");
		}
			else if(resto==5){
		
		    printf("el dia de la semana es viernes");
		}
			else if(resto==6){
		
		    printf("el dia de la semana es sabado");
		}
	}
