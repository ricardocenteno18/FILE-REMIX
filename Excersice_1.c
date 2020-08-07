#include <stdio.h>
#include <stdlib.h>
const char input [] = "file1.txt"; //Here we are reading the text file.
const char output [] = "file2.txt";



int main()
{

// We are opening the chars and the pontier.
FILE *fb_input;
FILE *fb_output;
char ln [100];
int number;

//Now we open the file

fb_input = fopen(input, "r");

	if(fb_input == NULL)
	{
	printf("No input file\n");
	return 8;
	}
				
fb_output = fopen(output, "w+");

	if(fb_output == NULL)
	{
	printf("No output file\n");
	return 8;
}
	while(fgets(ln, sizeof(ln), fb_input))
	{
		
		sscanf(ln, "%d", &number);		
		//The scanf is going to put the line into the integer

		if(number == EOF)
			{
			break;
			}

		if(number % 3 == 0 && number % 5 == 0)
		//Here we are starting the FizzBuzz program
		{
		fprintf(fb_output, "\nFizzBuzz\n");
		}
	
		
		if(number % 3 == 0)
		{
		fprintf(fb_output, "\nFizz\n");
		}

		if(number % 5 == 0)
		{
		fprintf(fb_output, "\nBuzz\n");
		}	
		else
			{
			fprintf(fb_output, "\n%d\n", number);
			}

	}

fclose(fb_input);
fclose(fb_output);

return 0;
}
