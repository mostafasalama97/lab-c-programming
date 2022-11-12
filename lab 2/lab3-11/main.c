//Receive numbers from the user, and exit when the sum exceeds 100.
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int x, sum = 0;
	printf ("Enter a value: ");
	scanf ("%d", &x);
	while(sum < 100)
	{
	    printf ("Enter a value: ");
        scanf ("%d", &x);
	    sum=sum+x;
	}
	return 0;
}
