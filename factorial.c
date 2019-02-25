#include <stdio.h>

int main()
{
  int i, n = 20;
  long int fact;
  
  for (i = 1, fact = 1; i <= n; i++)
    {
      fact *= i;
    }
  printf("El factorial de %d es %ld", 
	 n, fact);
  return 0;
}

