#include <stdio.h>
#include <unistd.h>

int main()
{
	char name[30];
	printf("Enter a request: ");
	scanf("%s", name);
	puts(name);
	printf("%.5s\n", name);
	printf("%10.5s\n", name);
	printf("%s \n", &name[2]);
	printf("%s is being processed\n", name);
	return(0);
}
