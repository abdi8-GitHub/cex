#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[] = "Jesus Loves You";
	char *delim = " ";
	char *token;

	token = strtok(str, delim);

	while(token)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
	return (0);
}

