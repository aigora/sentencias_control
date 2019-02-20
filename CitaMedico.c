/* 
Autora: Sonia Somolinos Bravo
Grupo: Q-103
Descripción: Pedir cita del médico online
*/

#include <stdio.h>

int main(){
	int edad, medico, dermatologia;
	
	printf("Introduzca su edad:\n");
	scanf("%d", &edad);
	
	if (edad<18){
		printf("No estas autorizado para pedir cita online\n");
	}
	else {
        printf("Elija a que tipo de medico quiere visitar: 1 Alergologia, 2 Dermatologia, 3 Pedriatria\n");
	    scanf("%d", &medico);
	    if (medico==1){
	        printf("Tiene cita con el Doctor Garcia el miercoles 20 a las 18:00 h\n");
	     }
	    else if (medico==2){
	    	printf("Elija: 1 martes 19 a las 14:20 h, 2 jueves 21 a las 16:45 h\n");
	    	scanf("%d", &dermatologia);
	    	if (dermatologia==1){
	    		printf("Tiene cita con la Doctora Rodriguez el martes 19 a las 14:20 h\n");
	    	}
			else if (dermatologia==2){
	    		printf("Tiene cita con la Doctora Rodriguez el jueves 21 a las 16:45 h\n");
			}
	    }
	    else if(medico==3){
	    	printf("Tiene cita con el Doctor Alvarez el miercoles 20 a las 11:00 h\n");
	    }
	    else {
	    	printf("Opcion incorrecta");
		}
    }  
	return 0;
}


