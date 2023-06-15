#include <stdio.h>
#include <stdlib.h>

#include "project.h"

int main(void)
{
    char *file = "file.txt";
    FILE *filePtr = NULL;

    if((filePtr = fopen(file, "r")) == NULL)
    {
        printf("Cannot open file");
        exit(EXIT_FAILURE);
    }

    fclose(filePtr);

    puts("Welcome");

    return 0;
}

/* 
   a. Write a program that counts the number of characters in a program.

   b. Write a program that counts the number of words in a text file.

   (A "word" is any sequence of non-white-space characters).

   c. Write a program that counts the file name of line in a text file.

   Have each program obtain the file name from the command line.
 */
