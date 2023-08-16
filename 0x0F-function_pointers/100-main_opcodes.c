#include <stdio.h>
#include <stdlib.h>

void print_opcodes(char *addr, int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		printf("%02hhx ", addr[i]);
	}
	printf("\n");
}

int main(int argc, char **argv)
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes((char *)main, num_bytes);

	return (0);
}

