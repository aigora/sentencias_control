//Marina Polo 54809 Q103

#include<stdio.h>
#include<math.h>

int main(){
    int y;
    for (int x=0; x<10; x++)
    {
        y=pow(x,2)+3;
        printf("El resultado de la operacion y=(x^2)+3 sera %d para x=%d\n\n",y,x);
    }
    return 0;
}
