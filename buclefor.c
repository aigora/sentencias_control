#include<stdio.h>
#include<math.h>
// miguel angel rodrigo garcia
//q103
//tablas de multiplicacion.
int main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		printf("tabla del %d\n",i);
		
		for(j=1;j<=10;j++)
		printf("%d x %d=d%\n",i,j,i*j);
	
	}
	return 0;
}
