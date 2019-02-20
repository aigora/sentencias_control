/*
Autor:Samuel Cerro Hdez
Grupo: Q103
Descripcion: Este programa ordena de menor a mayor tres numeros introducidos por el usuario.
*/




#include<stdio.h>

int main  (){
	float Num1, Num2, Num3;
	printf("Bienvenid@, este programa ordena de menor a mayor los numeros introducidos por el usuario.\n\n");
	printf("Introduzca el primer numero =>\t");
	scanf("%f", &Num1);
	printf("Introduzca el segundo numero =>\t");
	scanf("%f",&Num2);
	printf("Introduzca el tercer numero =>\t");
	scanf("%f",&Num3);
	if (Num3<Num1 && Num3<Num2){
		if (Num2>Num1){
			printf("%f\t",Num3);
			printf("%f\t",Num1);
			printf("%f\t",Num2);
		}
		else{
			printf("%f\t",Num3);
			printf("%f\t",Num2);
			printf("%f\t",Num1);
			
		}
		
	}
	else if (Num2<Num1 && Num2<Num3){
		if (Num3>Num1){
			printf("%f\t",Num2);
			printf("%f\t",Num1);
			printf("%f\t",Num3);
		}
		else{
			printf("%f\t",Num2);
			printf("%f\t",Num3);
			printf("%f\t",Num1);
		}
	
}
else if(Num1<Num2 && Num1<Num3){
	if (Num2<Num3){
		printf("%f\t",Num1);
		printf("%f\t",Num2);
		printf("%f\t",Num3);
		
	}
	else{ 
	printf("%f\t",Num1);
	printf("%f\t",Num3);
	printf("%f\t",Num2);
	}
}

return 0;
}
