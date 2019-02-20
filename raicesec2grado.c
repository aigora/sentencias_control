/*
Nombra Marcos Calderon Jimeno
Grupo Q203
Descripcion raices de ec segundo grado
*/
#include<stdio.h> 
#include<math.h>
int main()
{
float a, b, c, disc, x1, x2, xi, xr;
printf("Escribe el valor de los tres coeficientes (a, b, c)\n");
scanf("%f %f %f", &a, &b, &c);
if (a != 0) 
{ 
disc = pow(b, 2) - 4 * a * c;
if(disc > 0) 
{ 
printf("Las dos raices son reales: "); 
x1=(-b + sqrt(disc)) / (2 * a); 
x2=(-b - sqrt(disc)) / (2 * a); 
printf("x1=%.2f \t x2=%.2f", x1, x2); 
} 
else if(disc == 0)
{ 
x1 = -b / (2 * a); 
printf("Raíz única %.2f", x1); 
}
if(disc <0)
printf("no existe solucion\n");
else
xr = -b / (2 * a); 
xi = sqrt(-disc) / (2 * a); 
printf("La raiz real es %.2f y la imaginaria es %.2f", xr, xi); 
} 
else printf("El coeficiente a no puede ser 0.\n");
}

