#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	int i = 0; int sum = 0;
	printf("argc = %d\n", argc);
	printf("Lets see what is inside argv[]\n");
	
	if(argc > 1)
	{
		for(i = 1; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
			sum += atoi(argv[i]);
		}
	}
	printf("Sum = %d\n", sum);

	return (0);
}
