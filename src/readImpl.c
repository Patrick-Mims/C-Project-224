#include "project.h"

void read(char str[], int n)
{
    char *storage[3];
    int character;
    int i = 0, j;
    static int counter = 0;

    while((character = getchar()) != '\n')
    {
        if(i < n)
        {
            str[i++] = character;
        }
    }

    str[i] = '\0';

    if((storage[counter] = malloc(sizeof(char) * INDEX)) == NULL)
    {
        printf("Cannot Allocate Memory\n");
        exit("EXIT_FAILURE");
    }

    strcpy(storage[counter], str);
    counter++;

    if(counter == 3)
    {
        for(j = 0; j < 3; j++)
        {
            printf("storage => %s\n", storage[j]);
        }
    }
}

/*
int main(int argc, char **argv)
{
    int count = 0;
    char *message[INDEX];

    printf("Welcome\n");

    do
    {
        printf("Enter word %d: ", count);
        read(message, INDEX);
        count++;
    } while(count < SIZE);

    return 0;
}
*/
