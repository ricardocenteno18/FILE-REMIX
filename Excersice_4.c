#include <stdio.h>
#include <stdlib.h>
//Program in c to read the numbers of charcters, lines and words

//First, we declarate the constant of the txt.
const char counter[100] = "FILE.txt";
//Then we start the function.
int main()
{
//We declarate the pointer in FILE
    FILE * file;
    
//Ww declarate the variables
    char ch;
    int Characters, Words, Lines;

//No let's open the constant of the txt
    file = fopen(counter, "r");

//In this part we verify if the file is NULL
    if (file == NULL)
    {
        printf("\nError the read file is unable to open .\n");
  exit(EXIT_FAILURE);
    }

 Characters = 0;
 Words = 0;
 Lines = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        Characters++;

        // Checking the line #. 
        if (ch == '\n')
            lines++;

        // Checking the words #.
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            Words++;
    }


    //Finally, we print the results.
    printf("\n");
    printf("Characters = %d\n", characters);
    printf("Words      = %d\n", words);
    printf("Lines      = %d\n", lines);

    fclose(file);

    return 0;
}
