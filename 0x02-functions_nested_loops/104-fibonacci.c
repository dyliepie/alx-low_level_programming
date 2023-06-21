#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int count, n;
	unsigned long int first = 1, second = 2, next;

	printf("%lu, %lu, ", first, second);

	for (count = 3; count <= 98; count++)
	{
		next = first + second;
		printf("%lu", next);

		if (count < 98)
			printf(", ");

		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}
