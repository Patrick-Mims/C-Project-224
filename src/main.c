#include <stdio.h>
#include <stdlib.h>

#include "project.h"

// input is read from this buffer instead of the device itself.
// moving data in one large block move is much faster than tiny byte moves.
// when a program writes output to a file, the data goes into a buffer first.
void fileBuffering(FILE *filePtr)
{
    /*
       char buffer[INDEX]; // buffer address

    // full buffering, size N bytes 
    if((setvbuf(filePtr, buffer, _IOFBF, INDEX)) != 0)
    {
    printf("could not use setvbuf\n");
    exit(EXIT_FAILURE);
    }
     */

    printf("File Buffering...\n"); // 
    // fflush(fp);
}

void accessTempFile(FILE *filePtr)
{
    FILE *tempptr = NULL;
}

void createTempFile(char *message)
{
    char *template[INDEX];
    char *buffer[INDEX];
    int fp;

    memset(template, 0, sizeof(template));
    memset(buffer, 0, sizeof(buffer));

    if((message[INDEX] = malloc(sizeof(char) * INDEX)) == NULL)
        exit(EXIT_FAILURE);

    strncpy(buffer, "Something is working when I do this...\n", INDEX);

    strcat(message, "-");
    strncpy(template, message, INDEX);
    strcat(template, "XXXXXX");

    // mkstemp generates a unique temporary filename
    fp = mkstemp(template);

    write(fp, buffer, sizeof(buffer));

    //fileBuffering(fp);
}

int main(void)
{
    int i = 0;
    //char *file = "file.txt";
    //FILE *filePtr = NULL;
    char *message[INDEX];

    printf("Create A temp File\n");

    do {
        printf("temp file name => ");

        read(message, INDEX);

/*
        if((filePtr = fopen(file, "r")) == NULL)
        {
            printf("Cannot open file");
            exit(EXIT_FAILURE);
        }
        */


        createTempFile(message);
        i++;
    } while(i < 2);

    //fclose(filePtr);

    return 0;
}

/* 
   1. ask the user for the file name of the new temp file
   a. Write a program that counts the number of characters in a program.

   b. Write a program that counts the number of words in a text file.
   (A "word" is any sequence of non-white-space characters).

   c. Write a program that counts the file name of line in a text file.
   Have each program obtain the file name from the command line.


   This program asks the user to enter a temp file name
 */
