#include <stdio.h>

/**
 * main - A program that prints the size of various computer types
 *
 * Return: 0 on success
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char) * 8);
printf("Size of an int: %lu byte(s)\n", sizeof(int) * 8);
printf("Size of a long int: %lu byte(s)\n", sizeof(long int) * 8);
printf("Size of long long int: %lu byte(s)\n", sizeof(long long int) * 8);
printf("Size of a float: %lu byte(s)\n", sizeof(float) * 8);
return (0);
}
