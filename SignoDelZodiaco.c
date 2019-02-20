/*
Autora: María Canga
Grupo: Q-103
Descripción: Este programa te dice tu signo del zodiaco, según la cultura occidental
*/

#include <stdio.h>

int main() {
	int mes, dia;
	
	printf ("¿Quieres saber tu signo del zodiaco?\n\n");
	printf ("Introduce tu mes de nacimiento (numero del mes):\n");
	scanf ("%i", &mes);
	printf ("Introduce tu dia de nacimiento:\n");
	scanf ("%i", &dia);
	
	if (mes==1){
		if (dia<=20&&dia>0){
			printf ("Eres Capricornio");
		}
		else if (dia>20&&dia<32){
			printf ("Eres Acuario");
		}
		else {
			printf ("Error: Este error puede deberse a que el dia introducido no existe o a que has introducido tu dia de nacimiento con letras y no numeros");
		}
	}
	else if (mes==2){
		if (dia<=19&&dia>0){
			printf ("Eres Acuario");
		}
		else if (dia>19&&dia<30){
			printf ("Eres Piscis");
		}
		else {
			printf ("Error: Este error puede deberse a que el dia introducido no existe o a que has introducido tu dia de nacimiento con letras y no numeros");
		}
	}
	else if (mes==3){
		if (dia<=20&&dia>0){
			printf ("Eres Piscis");
		}
		else if (dia>20&&dia<32){
			printf ("Eres Aries");
		}
		else {
			printf ("Error: Este error puede deberse a que el dia introducido no existe o a que has introducido tu dia de nacimiento con letras y no numeros");
		}
	}
	else if (mes==4){
		if (dia<=20&&dia>0){
			printf ("Eres Aries");
		}
		else if (dia>20&&dia<31){
			printf ("Eres Tauro");
		}
		else {
			printf ("Error: Este error puede deberse a que el dia introducido no existe o a que has introducido tu dia de nacimiento con letras y no numeros");
		}
	}
	else if (mes==5){
		if (dia<=21&&dia>0){
			printf ("Eres Tauro");
		}
		else if (dia>21&&dia<32){
			printf ("Eres Geminis");
		}
		else {
			printf ("Error: Este error puede deberse a que el dia introducido no existe o a que has introducido tu dia de nacimiento con letras y no numeros");
		}
	}
	else if (mes==6){
		if (dia<=21&&dia>0){
			printf ("Eres Geminis");
		}
		else if (dia>21&&dia<31){
			printf ("Eres Cancer");
		}
		else {
			printf ("Error: Este error puede deberse a que el dia introducido no existe o a que has introducido tu dia de nacimiento con letras y no numeros");
		}
	}
	else if (mes==7){
		if (dia<=22&&dia>0){
			printf ("Eres Cancer");
		}
		else if (dia>22&&dia<32){
			printf ("Eres Leo");
		}
		else {
			printf ("Error: Este error puede deberse a que el dia introducido no existe o a que has introducido tu dia de nacimiento con letras y no numeros");
		}
	}
	else if (mes==8){
		if (dia<=22&&dia>0){
			printf ("Eres Leo");
		}
		else if (dia>22&&dia<32){
			printf ("Eres Virgo");
		}
		else {
			printf ("Error: Este error puede deberse a que el dia introducido no existe o a que has introducido tu dia de nacimiento con letras y no numeros");
		}
	}
	else if (mes==9){
		if (dia<=22&&dia>0){
			printf ("Eres Virgo");
		}
		else if (dia>22&&dia<31){
			printf ("Eres Libra");
		}
		else {
			printf ("Error: Este error puede deberse a que el dia introducido no existe o a que has introducido tu dia de nacimiento con letras y no numeros");
		}
	}
	else if (mes==10){
		if (dia<=22&&dia>0){
			printf ("Eres Libra");
		}
		else if (dia>22&&dia<32){
			printf ("Eres Escorpio");
		}
		else {
			printf ("Error: Este error puede deberse a que el dia introducido no existe o a que has introducido tu dia de nacimiento con letras y no numeros");
		}
	}
	else if (mes==11){
		if (dia<=22&&dia>0){
			printf ("Eres Escorpio");
		}
		else if (dia>22&&dia<31){
			printf ("Eres Sagitario");
		}
		else {
			printf ("Error: Este error puede deberse a que el dia introducido no existe o a que has introducido tu dia de nacimiento con letras y no numeros");
		}
	}
	else if (mes==12){
		if (dia<=21&&dia>0){
			printf ("Eres Sagitario");
		}
		else if (dia>21&&dia<32){
			printf ("Eres Capricornio");
		}
		else {
			printf ("Error: Este error puede deberse a que el dia introducido no existe o a que has introducido tu dia de nacimiento con letras y no numeros");
		}
	}
	else{
			printf ("Error: Este error puede deberse a que el mes introducido no existe o a que has introducido tu mes de nacimiento con letras y no numeros");
		}
}
