/* Autor:Hugo García Las Heras
Grupo:Q-203
Descripción: El usuario introduce dos numeros enteros y el ordenador imprime por pantalla los numeros entre ellos dos que sean múltiplos de 7 siempre y cuando el segundo número introducido sea mayor 
que el primero y que ambos sean mayores de cero */
#include<stdio.h>
void main()
{
	int x , y , i; 
       do 
	{
	printf("Introduce el primer numero:\n");
	scanf("%d",&x);
	printf("Introduce el segundo numero:\n");
	scanf("%d",&y);
	}
	while((x>=y)||(x<=0)||(y<=0));
	 printf("Los multiplos de 7 entre %d y %d son:",x,y);
	for(i=x;i<=y;i++)
	    if(i % 7==0)
		printf("%d\n",i);
    }
