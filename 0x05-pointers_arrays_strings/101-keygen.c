#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int i;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = rand() % 94 + 33; // Generates a random printable ASCII character
    }
    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the password string

    printf("%s", password);

    return 0;
}
