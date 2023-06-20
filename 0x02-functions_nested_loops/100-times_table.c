#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number of times table to print
 *
 * Description: This function prints the times table for a given number n.
 *              It prints the table in a formatted manner, separating each
 *              product by a comma and space. The table starts from 0 and
 *              goes up to n.
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, product;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;

				if (j == 0)
					printf("%d", product);
				else
					printf(", %d", product);
			}

			printf("\n");
		}
	}
}
