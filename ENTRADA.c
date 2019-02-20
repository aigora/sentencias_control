#include <stdio.h>

int main ()
{ 
int edad , zona , n_consu ,precio  ;
float total ;
printf( "Entrada a concierto");
printf( "Introuzca su edad:\n ");
scanf("%d",&edad);
if ( edad>18)
{ printf ( "Indique en que zona : 1.escaleras , 2.premium , 3. pista\n  ");
scanf ( "%d",&zona);
{
if (zona==1)
printf ("Su precio es de 20 euros+ iva\n " );
precio= 20;
if (zona==2)
printf ("Su precio es de 50 euros + iva\n");
precio=50;
if (zona==3)
printf("Su precio es de 30 euros + iva\n");
precio=30;
}
printf ("Indique el numero de consumiciones que realizara,cada consumicion tiene un precio de 4,5 euros\n  ");
scanf("%d", &n_consu );
total=(precio+(precio*0,21)+(4,5*n_consu));
printf ("Su precio total a pagar es de %f",total);
}
else 
printf( " No puede comprar entrada al ser menor de edad ");
}
