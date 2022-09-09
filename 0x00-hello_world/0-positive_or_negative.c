#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main is about to know if code is right */

/* to ready the code we will use betty */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    if (n > 0) 
    printf("%i is postive\n",n);
    else if (n == 0) 
    printf("%i is zero\n",n);
    else (n < 0);
    printf("%i is negative\n",n);
	return (0);
}
