#include <stdlib.h>
#include <time.h>
#include <stdio.h>
 /**
  * main - entry point 
  *
  * descreption: negative or postive 
  *
  * Return 0 (sucsess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is postive/n",n);
	else if (n==0)
		printf("%i is zero/n",n);
	else
	      	printf("%i is negative/n",n);	
	return (0);
}
