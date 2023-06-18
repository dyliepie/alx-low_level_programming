/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, followed by a new line.
 *              Uses the putchar function to adhere to the given requirements.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
