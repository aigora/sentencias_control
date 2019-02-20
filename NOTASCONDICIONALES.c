#include<math.h>
#include<stdio.h>
int main()
{
	float a, b ,c, d, Notamedia;
printf("PROCESO DE ELECCION DEL ALUMNADO\n");
printf("Introduzca sus notas para obtener la media total:\n");
printf("MATEMATICAS:\n");
scanf("%f", &a);
printf("LENGUA:\n");
scanf("%f", &b);
printf("HISTORIA\n");
scanf("%f", &c);
printf("INGLES\n");
scanf("%f", &d);
Notamedia=(a+b+c+d)/4;
printf("Su nota media es de %.2f\n", Notamedia);
   if (Notamedia<5){
    printf("Ha suspendido\n");
     if (Notamedia>=8){
	   
        printf("Ha obtenido un sobresaliente\n");
		}
         else if(Notamedia>=6){
		 
          printf("Ha obtenido un notable\n");
         }
		   else{
		   
            printf("Aprobado\n");
            }
       

        
}
}
