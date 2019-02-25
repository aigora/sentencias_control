/* 
Sonia Somolinos Bravo
Q-103
5 primeras potencias de los números naturales del 1 al 5
*/

#include<stdio.h>
main(){
int x,a,b,c,d;

x=1;
while (x<=5){
a=x*x;
printf("%d al cuadrado es %d\n",x,a);

b=pow(x,3);
printf("%d al cubo es %d\n",x,b);

c=pow(x,4);
printf("%d a la cuarta es %d\n",x,c);

d=pow(x,5);
printf("%d a la quinta es %d\n",x,d);

x++;
}
}
