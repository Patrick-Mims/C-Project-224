#include <stdio.h>
#include <stdlib.h>

#include "project.h"

void accessTempFile(FILE *filePtr)
{
    FILE *tempptr = NULL;
}

void createTempFile(char *message)
{
    char *template[INDEX];

    if((message[INDEX] = malloc(sizeof(char) * INDEX)) == NULL)
        exit(EXIT_FAILURE);

    strcat(message, "-");
    strncpy(template, message, 16);
    strcat(template, "XXXXXX");

    if((mkstemp(template)) < 0)
        exit(EXIT_FAILURE);

    printf("=> %s\n", template);
}

int main(void)
{
    char *file = "file.txt";
    FILE *filePtr = NULL;
    char *message[INDEX];

    printf("Create A temp File\n");

    printf("temp file name: ");

    read(message, INDEX);

    if((filePtr = fopen(file, "r")) == NULL)
    {
        printf("Cannot open file");
        exit(EXIT_FAILURE);
    }

    createTempFile(message);

    fclose(filePtr);

    puts("Welcome");

    return 0;
}

/* 
   1. ask the user for the temp file name

   a. Write a program that counts the number of characters in a program.

   b. Write a program that counts the number of words in a text file.

   (A "word" is any sequence of non-white-space characters).

   c. Write a program that counts the file name of line in a text file.

   Have each program obtain the file name from the command line.
 */
