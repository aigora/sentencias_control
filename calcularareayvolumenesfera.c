#include<stdio.h> 
#include<math.h>
int main () 
{ 
float r, area, volumen;
printf("Elige un radio para su esfera \n");
scanf(" %f", &r);
area=4* M_PI * pow(r,2);
volumen=( (4.0/3.0) * M_PI * pow(r,3));
printf("El area de su esfera es %.2f \n", area);
printf("El volumen de su esfera es %.2f \n", volumen);
return 0;
}


