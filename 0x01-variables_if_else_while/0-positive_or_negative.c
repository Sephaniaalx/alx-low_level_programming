#include <stdio.h>
#include <stdio.h>
#include <time.h>
/**
 * main - main block
 * Description: get a random number
 * and display if number is positive or negative
 * Return: 0 Always
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
{
printf("%i is zero\n", n);
}

else if (n < 0)
{
printf("%i is negative\n", n);
}

else
{
printf("%i is positive\n", n);
}

return (0);

}
