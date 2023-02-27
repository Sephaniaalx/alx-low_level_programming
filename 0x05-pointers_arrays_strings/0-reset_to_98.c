#include "main.h"
#include <stdio.h>

/**
 * A function that takes a pointer to an int as parameter and updates the value it points to to 98
 *
 */

void reset_to_98(int *n);
int main()
{
	int *n;
	*n = &n;
       	n = 98;
	printf("%d\n",&n);
	return(0);
}
