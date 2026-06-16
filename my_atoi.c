/*
ATOI IS A STRING TO INTEGER CONVERTER (ASCII TO INTEGER)

WHEN RUNNING, INPUT A NUMBER AS A STRING
AND THE RESULT WILL BE AN INTEGER
*/

#include <stdio.h>

int my_atoi(char *s) 
{
    int is_negative = 0;
    if (s[0] == '-')
    {
        s++;
        is_negative = 1;
    }

    int sum = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        sum = 10*sum + s[i] - '0';
    }

    return is_negative ? -sum : sum;
}

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <number>\n", argv[0]);
        return -1;
    }

    // User enters a number (as a string) e.g. "789"
    int number = my_atoi(argv[1]);
    printf("number = %d\n", number);
    return 0;
}
