#include <stdio.h>
int main()
{
	int num;
	printf("Introduzca numero del 1 al 10\n");
	scanf("%d",&num);
	if (num % 2== 0)
	printf("%d es par",num);
	else 
	printf("%d no es par",num);
	return 0;
}
