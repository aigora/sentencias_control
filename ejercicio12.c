#include<stdio.h>
#include<math.h>
//Miguel Ángel Rodrigo García
//Q103


int main ()
{
	int a,b,c,grande;
	printf("intruzca 3 numeros\n ");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b)
	{
		grande=a;
	}
	else 
	{
		grande=b;
	}
	if (grande > c)
	{
		printf("el numero mas grande es %d",grande);
		
	}
	else{
		printf("el numero grande es %d",c);
	}
	return 0;
	}
	
